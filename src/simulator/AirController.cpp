/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>

AirController::AirController() {
	// TODO Auto-generated constructor stub

}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
		std::list<Flight*> flights = Airport::getInstance()->getFlights();
		std::list<Flight*>::iterator it;

		Position pos_aterrizaje_0(3500.0, 0.0, 100.0);
		Position pos_aterrizaje_1(1500.0, 0.0, 50.0);
		Position pos_aterrizaje_2(200.0, 0.0, 25.0);
		Position pos_aterrizaje_3(-750.0, 0.0, 25.0);

		//posicion circuito 1
		Position pos_circuito1_0(20000.0, -15000.0, 3000.0);
		Position pos_circuito1_1(20000.0, -5000.0, 2600.0);
		Position pos_circuito1_2(10000.0, -5000.0, 2200.0);
		Position pos_circuito1_3(10000.0, -15000.0, 1800.0);
		Position pos_circuito1_4(20000.0, -15000.0, 1400.0);
		Position pos_circuito1_5(20000.0, -5000.0, 1000.0);
		Position pos_circuito1_6(10000.0, -5000.0, 600.0);
		Position pos_circuito1_7(10000.0, -15000.0, 200.0);

		//posicion circuito 2
		Position pos_circuito2_0(-20000.0, 15000.0, 3000.0);
		Position pos_circuito2_1(-20000.0, 5000.0, 2600.0);
		Position pos_circuito2_2(-10000.0, 5000.0, 2200.0);
		Position pos_circuito2_3(-10000.0, 15000.0, 1800.0);
		Position pos_circuito2_4(-20000.0, 15000.0, 1400.0);
		Position pos_circuito2_5(-20000.0, 5000.0, 1000.0);
		Position pos_circuito2_6(-10000.0, 5000.0, 600.0);
		Position pos_circuito2_7(-10000.0, 15000.0, 200.0);

		//posicion circuito 3
		Position pos_circuito3_0(20000.0, 15000.0, 3000.0);
		Position pos_circuito3_1(20000.0, 5000.0, 2600.0);
		Position pos_circuito3_2(10000.0, 5000.0, 2200.0);
		Position pos_circuito3_3(10000.0, 15000.0, 1800.0);
		Position pos_circuito3_4(20000.0, 15000.0, 1400.0);
		Position pos_circuito3_5(20000.0, 5000.0, 1000.0);
		Position pos_circuito3_6(10000.0, 5000.0, 600.0);
		Position pos_circuito3_7(10000.0, 15000.0, 200.0);

		//posicion circuito 4
		Position pos_circuito4_0(-20000.0, -15000.0, 3000.0);
		Position pos_circuito4_1(-20000.0, -5000.0, 2600.0);
		Position pos_circuito4_2(-10000.0, -5000.0, 2200.0);
		Position pos_circuito4_3(-10000.0, -15000.0, 1800.0);
		Position pos_circuito4_4(-20000.0, -15000.0, 1400.0);
		Position pos_circuito4_5(-20000.0, -5000.0, 1000.0);
		Position pos_circuito4_6(-10000.0, -5000.0, 600.0);
		Position pos_circuito4_7(-10000.0, -15000.0, 200.0);


		Route ra0, ra1, ra2, ra3; //ruta aterrizaje
		Route rc1_0, rc1_1, rc1_2, rc1_3, rc1_4, rc1_5, rc1_6, rc1_7; //ruta circuito 1
		Route rc2_0, rc2_1, rc2_2, rc2_3, rc2_4, rc2_5, rc2_6, rc2_7; //ruta circuito 2
		Route rc3_0, rc3_1, rc3_2, rc3_3, rc3_4, rc3_5, rc3_6, rc3_7; //ruta circuito 3
		Route rc4_0, rc4_1, rc4_2, rc4_3, rc4_4, rc4_5, rc4_6, rc4_7; //ruta circuito 4

		//parámetros aterrizaje
		ra0.pos = pos_aterrizaje_0;
		ra0.speed = 200.0;

		ra1.pos = pos_aterrizaje_1;
		ra1.speed = 100.0;

		ra2.pos = pos_aterrizaje_2;
		ra2.speed = 19.0;

		ra3.pos = pos_aterrizaje_3;
		ra3.speed = 15.0;


		//parámetros circuito 1
		rc1_0.pos = pos_circuito1_0;
		rc1_0.speed = 300.0;

		rc1_1.pos = pos_circuito1_1;
		rc1_1.speed = 300.0;

		rc1_2.pos = pos_circuito1_2;
		rc1_2.speed = 300.0;

		rc1_3.pos = pos_circuito1_3;
		rc1_3.speed = 300.0;

		rc1_4.pos = pos_circuito1_4;
		rc1_4.speed = 300.0;

		rc1_5.pos = pos_circuito1_5;
		rc1_5.speed = 300.0;

		rc1_6.pos = pos_circuito1_6;
		rc1_6.speed = 300.0;

		rc1_7.pos = pos_circuito1_7;
		rc1_7.speed = 300.0;


		//parámetros circuito 2
		rc2_0.pos = pos_circuito2_0;
		rc2_0.speed = 300.0;

		rc2_1.pos = pos_circuito2_1;
		rc2_1.speed = 300.0;

		rc2_2.pos = pos_circuito2_2;
		rc2_2.speed = 300.0;

		rc2_3.pos = pos_circuito2_3;
		rc2_3.speed = 300.0;

		rc2_4.pos = pos_circuito2_4;
		rc2_4.speed = 300.0;

		rc2_5.pos = pos_circuito2_5;
		rc2_5.speed = 300.0;

		rc2_6.pos = pos_circuito2_6;
		rc2_6.speed = 300.0;

		rc2_7.pos = pos_circuito2_7;
		rc2_7.speed = 300.0;


		//parámetros circuito 3
		rc3_0.pos = pos_circuito3_0;
		rc3_0.speed = 300.0;

		rc3_1.pos = pos_circuito3_1;
		rc3_1.speed = 300.0;

		rc3_2.pos = pos_circuito3_2;
		rc3_2.speed = 300.0;

		rc3_3.pos = pos_circuito3_3;
		rc3_3.speed = 300.0;

		rc3_4.pos = pos_circuito3_4;
		rc3_4.speed = 300.0;

		rc3_5.pos = pos_circuito3_5;
		rc3_5.speed = 300.0;

		rc3_6.pos = pos_circuito3_6;
		rc3_6.speed = 300.0;

		rc3_7.pos = pos_circuito3_7;
		rc3_7.speed = 300.0;


		//parámetros circuito 4
		rc4_0.pos = pos_circuito4_0;
		rc4_0.speed = 300.0;

		rc4_1.pos = pos_circuito4_1;
		rc4_1.speed = 300.0;

		rc4_2.pos = pos_circuito4_2;
		rc4_2.speed = 300.0;

		rc4_3.pos = pos_circuito4_3;
		rc4_3.speed = 300.0;

		rc4_4.pos = pos_circuito4_4;
		rc4_4.speed = 300.0;

		rc4_5.pos = pos_circuito4_5;
		rc4_5.speed = 300.0;

		rc4_6.pos = pos_circuito4_6;
		rc4_6.speed = 300.0;

		rc4_7.pos = pos_circuito4_7;
		rc4_7.speed = 300.0;


		if(!Airport::getInstance()->is_booked_landing())
		{
			Flight* primero = *(flights.begin());

			primero->getRoute()->clear();
		}

		for(it = flights.begin(); it!=flights.end(); ++it)
		{
			if((*it)->getRoute()->empty())
			{
				if(Airport::getInstance()->is_booked_landing()&& (*it)->getPosition().get_y() < 0) {

						if((*it)->getPosition().get_y() >= -(*it)->getPosition().get_x()){

							(*it)->getRoute()->push_back(rc1_0);
							(*it)->getRoute()->push_back(rc1_1);
							(*it)->getRoute()->push_back(rc1_2);
							(*it)->getRoute()->push_back(rc1_3);
							(*it)->getRoute()->push_back(rc1_4);
							(*it)->getRoute()->push_back(rc1_5);
							(*it)->getRoute()->push_back(rc1_6);
							(*it)->getRoute()->push_back(rc1_7);

						} else if ((*it)->getPosition().get_y() < -(*it)->getPosition().get_x()){

							(*it)->getRoute()->push_back(rc4_0);
							(*it)->getRoute()->push_back(rc4_1);
							(*it)->getRoute()->push_back(rc4_2);
							(*it)->getRoute()->push_back(rc4_3);
							(*it)->getRoute()->push_back(rc4_4);
							(*it)->getRoute()->push_back(rc4_5);
							(*it)->getRoute()->push_back(rc4_6);
							(*it)->getRoute()->push_back(rc4_7);

						}
				} else if (Airport::getInstance()->is_booked_landing()&& (*it)->getPosition().get_y() >= 0){

					if((*it)->getPosition().get_y() < (*it)->getPosition().get_x()){

						(*it)->getRoute()->push_back(rc3_0);
						(*it)->getRoute()->push_back(rc3_1);
						(*it)->getRoute()->push_back(rc3_2);
						(*it)->getRoute()->push_back(rc3_3);
						(*it)->getRoute()->push_back(rc3_4);
						(*it)->getRoute()->push_back(rc3_5);
						(*it)->getRoute()->push_back(rc3_6);
						(*it)->getRoute()->push_back(rc3_7);

					} else if ((*it)->getPosition().get_y() >= (*it)->getPosition().get_x()){

						(*it)->getRoute()->push_back(rc2_0);
						(*it)->getRoute()->push_back(rc2_1);
						(*it)->getRoute()->push_back(rc2_2);
						(*it)->getRoute()->push_back(rc2_3);
						(*it)->getRoute()->push_back(rc2_4);
						(*it)->getRoute()->push_back(rc2_5);
						(*it)->getRoute()->push_back(rc2_6);
						(*it)->getRoute()->push_back(rc2_7);
					}
				} else {

					Airport::getInstance()->book_landing();

					(*it)->getRoute()->push_back(ra0);
					(*it)->getRoute()->push_back(ra1);
					(*it)->getRoute()->push_back(ra2);
					(*it)->getRoute()->push_back(ra3);
				}
			}
		}
};// namespace atcsim
