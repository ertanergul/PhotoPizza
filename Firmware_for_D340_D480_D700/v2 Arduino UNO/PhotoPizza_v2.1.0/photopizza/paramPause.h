/**
 * File: paramPause.h
 * Created on: 10 mar 2015 г.
 * Description:
 * PhotoPizza DIY is an open source project of 360° product photography turntable.
 *
 * Author: Roman Savrulin <romeo.deepmind@gmail.com>
 * Project Author: Vladimir Matiyasevith <vladimir.m@makerdrive.com>
 * Project Site: PhotoPizza.org
 *
 * Copyright: 2015 MakerDrive
 * Copying permission statement:
 *  This file is part of PhotoPizza DIY.
 *
 *  PhotoPizza DIY is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef PHOTOPIZZA_V1_2_2_PARAMPAUSE_H_
#define PHOTOPIZZA_V1_2_2_PARAMPAUSE_H_


#include "defines.h"
#include "param.h"

namespace PhotoPizza {
class paramPause : public LimitedParam {
public:
  paramPause() : paramPause(0){}
  paramPause(long val){
    _valStep = PAUSE_STEP;
    _valLoLimit = PAUSE_MIN;
    _valHiLimit = PAUSE_MAX;
    this->set(val);
  }

  virtual String getName(bool shorten = false){
    return F("pause");
  }

  virtual String toString(bool shorten = false){
    long val = get();
    if(val > 0)
      return (String)val;
    else if(val == 0)
      return F("none");
    else
      return F("?");
  }
};
}


#endif /* PHOTOPIZZA_V1_2_2_PARAMPAUSE_H_ */
