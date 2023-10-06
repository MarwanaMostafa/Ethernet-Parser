FROM gcc:latest

COPY . /usr/src/cpp_project

WORKDIR /usr/src/cpp_project

RUN g++ -o main main.cpp

CMD ["./main"]