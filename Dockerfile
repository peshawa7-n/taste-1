FROM ubuntu:latest

RUN apt update && apt install -y g++

WORKDIR /app
COPY . .

RUN g++ main.cpp -o app

CMD ["./app"]
