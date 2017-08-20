#/bin/bash
# Eudald Romo


function ask {
    echo $1        # add this line
    read -n 1 -r
    if [[ $REPLY =~ ^[Yy]$ ]]
    then
        return 1;
    else
        exit
        echo "Abort.."
    fi
}

if [ "$#" == 1 ] || [ "$1" == "APT" ]; then
    echo "Install useful packages from apt-get"
    sudo apt-get update
    sudo apt-get --yes install git gitk git-gui geany geany-plugins vim terminator meshlab recordmydesktop meld sagasu openssh-server retext filezilla vlc ipython mesa-utils bmon libyaml-0-2
    sudo apt-get --yes install hardinfo cpufrequtils   # for speedup cpu
    sudo apt-get --yes install kcachegrind kcachegrind-converters
    sudo apt-get --yes install build-essential cmake debhelper freeglut3-dev gtk-doc-tools libboost-filesystem-dev libboost-iostreams-dev libboost-program-options-dev libboost-random-dev libboost-regex-dev libboost-signals-dev libboost-system-dev libboost-thread-dev libcurl4-openssl-dev libfreeimage-dev libglew-dev libgtkmm-2.4-dev libltdl-dev libgsl0-dev libportmidi-dev libprotobuf-dev libprotoc-dev libqt4-dev libqwt-dev libtar-dev libtbb-dev libtinyxml-dev libxml2-dev ncurses-dev pkg-config protobuf-compiler python-matplotlib libqhull-dev python-pygame doxygen mercurial libglib2.0-dev python-dev gfortran f2c libf2c2-dev spacenavd libspnav-dev python-numpy python-scipy python-vtk python-pip libgmp3-dev libblas-dev liblapack-dev libv4l-dev subversion libxmu-dev libusb-1.0-0-dev python-pymodbus graphviz curl libwww-perl libterm-readkey-perl
    sudo apt-get --yes install libgl1-mesa-dev  # for libbot libGL.so
    # sudo apt-get --yes install virtualbox
    sudo apt-get --yes install compizconfig-settings-manager
    sudo apt-get --yes install libudev-dev  # for realsense
    #sudo pip install --upgrade scipy
    sudo pip install chan
    sudo pip install openpyxl
    sudo pip install sklearn
    sudo pip install plyfile
    sudo pip install tabulate
    sudo pip install ipdb
    sudo pip install pyprof2calltree
    sudo pip install tabulate
    sudo pip install gTTs
    sudo pip install python-vlc
    sudo pip install --upgrade requests
    sudo pip install enum34
    sudo easy_install pycollada
    sudo apt-get --yes install byacc flex
    sudo apt-get --yes install libcgal-dev # for apriltags from personalrobotics
fi

if [ "$#" == 0 ] || [ "$1" == "SFML" ]; then
  # install LCM
  echo download sfml 2.4.2 before continuing
  ask()
  #wget -P ~/Downloads -q https://github.com/lcm-proj/lcm/releases/download/v1.3.1/lcm-1.3.1.zip
  mkdir -p $HOME/software
  cd $HOME/software/
  tar -xzvf ~/Downloads/SFML-2.4.2-linux-gcc-64-bit.tar.gz
  cd SFML-2.4.2/
fi
