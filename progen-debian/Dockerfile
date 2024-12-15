FROM debian
USER root

RUN mkdir /home/progen && \
    apt-get update && \
    apt-get install -y vim  \
    git  \
    sbcl  \
    cargo  \
    screenfetch \
    sudo && \
    rm -rf /var/lib/apt/lists/ 
    
WORKDIR /home/progen

