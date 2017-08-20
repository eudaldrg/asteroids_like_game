#!/bin/bash

echo "Setting asteroids environment"

set_environment(){
  export PATH=$PATH:$ARC_BASE/software/build/bin
  export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
  export CLASSPATH=$CLASSPATH:/usr/local/share/java/lcm.jar
}

set_sfml()
{
  export SFML_ROOT=$HOME/software/SFML-2.4.2
}
set_clion()
{
  export PATH=$PATH:$HOME/software/clion-2017.1/bin
}

set_environment
set_sfml
set_clion
