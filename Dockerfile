FROM gcc:latest

COPY . /usr/src/cpp_project

WORKDIR /usr/src/cpp_project

RUN g++ *.cpp ./DataManager/*.cpp ./Factory/*.cpp ./Packets/*.cpp -o main.exe

CMD ["./main.exe"]