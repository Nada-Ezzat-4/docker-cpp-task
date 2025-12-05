FROM gcc:latest
COPY . /app
WORKDIR /app
RUN g++ main.cpp -o myapp
CMD ["./myapp"]
