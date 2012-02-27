#!/bin/bash
# Copyright (C) 2009-2010  Josiah Gordon <josiahg@gmail.com>
#
# This is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

NAME=billy
HOME_PATH=$HOME/.$NAME
BASE=/usr/share/$NAME/

if [[ ! -d $HOME_PATH ]]
then
    echo "Configuring ${NAME} in ${HOME_PATH}"
    mkdir $HOME_PATH
    pushd $HOME_PATH
    ln -s $BASE/$NAME ./
    ln -s $BASE/init ./
    ln -s $BASE/link ./
    ln -s $BASE/writer ./
    ./init
    popd
fi

pushd $HOME_PATH
[[ -n $1 ]] && ./$1 || ./$NAME
popd
