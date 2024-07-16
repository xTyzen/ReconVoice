import os
import sys
import argparse
import speech_recognition as sr
import time 
from tqdm import tqdm


print("""    ____                      _    __      _           ______         
   / __ \___  _________  ____| |  / /___  (_)_______  / ____/__    __ 
  / /_/ / _ \/ ___/ __ \/ __ \ | / / __ \/ / ___/ _ \/ /  __/ /___/ /_
 / _, _/  __/ /__/ /_/ / / / / |/ / /_/ / / /__/  __/ /__/_  __/_  __/
/_/ |_|\___/\___/\____/_/ /_/|___/\____/_/\___/\___/\____//_/   /_/   
                                                                      by xTyzen IV""")

print("\n")


def transcribe_audio(audio_file):
    recognizer = sr.Recognizer()
    with sr.AudioFile(audio_file) as source:
        audio_data = recognizer.record(source)

    audio_duration = len(audio_data.frame_data) / audio_data.sample_rate

    try:
        with tqdm(total=audio_duration, desc="Transcription Progress") as pbar:
            text = ""
            chunks = recognizer.recognize_google(audio_data, language='de-DE', show_all=False)
            for chunk in chunks:
                text += chunk
                pbar.update(len(chunk.split()))
        return text
    except sr.UnknownValueError:
        return "Unable to transcribe audio: speech is indistinct or inaudible"
    except sr.RequestError as e:
        return f"Error requesting transcription service : {e}"

def main(audio_file, output_file):
    transcribed_text = transcribe_audio(audio_file)

    with open(output_file, "w") as f:
        f.write(transcribed_text)

    print("Transcription completed. The text was saved in", output_file)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Transcribe audio file to text.')
    parser.add_argument('-a', '--audio_file', type=str, help='Path to the audio file', required=True)
    parser.add_argument('-o', '--output_file', type=str, help='Output file for transcription', required=True)
    args = parser.parse_args()

    main(args.audio_file, args.output_file)


time.sleep(1)
sys.exit(1)