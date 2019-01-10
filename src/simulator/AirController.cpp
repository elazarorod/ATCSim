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

atcsim::AirController::AirController() {
	// TODO Auto-generated constructor stub

}

atcsim::AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
atcsim::AirController::doWork()
{
			std::list<Flight*> flights = Airport::getInstance()->getFlights();
			std::list<Flight*>::iterator it;

			Position pos_circuito1_0(3000.0, 10000.0, 2500.0);
			Position pos_circuito1_1(3000.0, 3000.0, 2500.0);
			Position pos_circuito1_2(0.0, 3000.0, 2500.0);
			Position pos_circuito1_3(0.0, 10000.0, 2500.0);
			Position pos_circuito1_4(3000.0, 10000.0, 1500.0);
			Position pos_circuito1_5(3000.0, 3000.0, 1500.0);
			Position pos_circuito1_6(0.0, 3000.0, 1500.0);
			Position pos_circuito1_7(0.0, 10000.0, 1500.0);
			Position pos_circuito1_8(3000.0, 10000.0, 500.0);
			Position pos_circuito1_9(3000.0, 3000.0, 500.0);
			Position pos_circuito1_10(0.0, 3000.0, 500.0);
			Position pos_circuito1_11(0.0, 10000.0, 500.0);

			Position pos_circuito2_0(3000.0, -10000.0, 2500.0);
			Position pos_circuito2_1(3000.0, -3000.0, 2500.0);
			Position pos_circuito2_2(0.0, -3000.0, 2500.0);
			Position pos_circuito2_3(0.0, -10000.0, 2500.0);
			Position pos_circuito2_4(3000.0, -10000.0, 1500.0);
			Position pos_circuito2_5(3000.0, -3000.0, 1500.0);
			Position pos_circuito2_6(0.0, -3000.0, 1500.0);
			Position pos_circuito2_7(0.0, -10000.0, 1500.0);
			Position pos_circuito2_8(3000.0, -10000.0, 500.0);
			Position pos_circuito2_9(3000.0, -3000.0, 500.0);
			Position pos_circuito2_10(0.0, -3000.0, 500.0);
			Position pos_circuito2_11(0.0, -10000.0, 500.0);

			Position pos_circuito3_0(9500.0, 3500.0, 2500.0);
			Position pos_circuito3_1(9500.0, -3500.0, 2500.0);
			Position pos_circuito3_2(4500.0, -3500.0, 2500.0);
			Position pos_circuito3_3(4500.0, 3500.0, 2500.0);
			Position pos_circuito3_4(9500.0, 3500.0, 1500.0);
			Position pos_circuito3_5(9500.0, -3500.0, 1500.0);
			Position pos_circuito3_6(4500.0, -3500.0, 1500.0);
			Position pos_circuito3_7(4500.0, 3500.0, 1500.0);
			Position pos_circuito3_8(9500.0, 3500.0, 500.0);
			Position pos_circuito3_9(9500.0, -3500.0, 500.0);
			Position pos_circuito3_10(4500.0, -3500.0, 500.0);
			Position pos_circuito3_11(4500.0, 3500.0, 500.0);

			Position pos_aterrizaje_0(3500.0, 0.0, 100.0);
			Position pos_aterrizaje_1(1500.0, 0.0, 50.0);
			Position pos_aterrizaje_2(200.0, 0.0, 25.0);
			Position pos_aterrizaje_3(-750.0, 0.0, 25.0);

			Route rc10, rc11, rc12, rc13, rc14, rc15, rc16, rc17, rc18, rc19, rc110, rc111;
			Route rc20, rc21, rc22, rc23, rc24, rc25, rc26, rc27, rc28, rc29, rc210, rc211;
			Route rc30, rc31, rc32, rc33, rc34, rc35, rc36, rc37, rc38, rc39, rc310, rc311;
			Route ra0, ra1, ra2, ra3;

			rc10.pos = pos_circuito1_0;
			rc10.speed = 500.0;
			rc11.pos = pos_circuito1_1;
			rc11.speed = 500.0;
			rc12.pos = pos_circuito1_2;
			rc12.speed = 500.0;
			rc13.pos = pos_circuito1_3;
			rc13.speed = 500.0;
			rc14.pos = pos_circuito1_4;
			rc14.speed = 500.0;
			rc15.pos = pos_circuito1_5;
			rc15.speed = 500.0;
			rc16.pos = pos_circuito1_6;
			rc16.speed = 500.0;
			rc17.pos = pos_circuito1_7;
			rc17.speed = 500.0;
			rc18.pos = pos_circuito1_8;
			rc18.speed = 500.0;
			rc19.pos = pos_circuito1_9;
			rc19.speed = 500.0;
			rc110.pos = pos_circuito1_10;
			rc110.speed = 500.0;
			rc111.pos = pos_circuito1_11;
			rc111.speed = 500.0;

			rc20.pos = pos_circuito2_0;
			rc20.speed = 500.0;
			rc21.pos = pos_circuito2_1;
			rc21.speed = 500.0;
			rc22.pos = pos_circuito2_2;
			rc22.speed = 500.0;
			rc23.pos = pos_circuito2_3;
			rc23.speed = 500.0;
			rc24.pos = pos_circuito2_4;
			rc24.speed = 500.0;
			rc25.pos = pos_circuito2_5;
			rc25.speed = 500.0;
			rc26.pos = pos_circuito2_6;
			rc26.speed = 500.0;
			rc27.pos = pos_circuito2_7;
			rc27.speed = 500.0;
			rc28.pos = pos_circuito2_8;
			rc28.speed = 500.0;
			rc29.pos = pos_circuito2_9;
			rc29.speed = 500.0;
			rc210.pos = pos_circuito2_10;
			rc210.speed = 500.0;
			rc211.pos = pos_circuito2_11;
			rc211.speed = 500.0;

			rc30.pos = pos_circuito3_0;
			rc30.speed = 500.0;
			rc31.pos = pos_circuito3_1;
			rc31.speed = 500.0;
			rc32.pos = pos_circuito3_2;
			rc32.speed = 500.0;
			rc33.pos = pos_circuito3_3;
			rc33.speed = 500.0;
			rc34.pos = pos_circuito3_4;
			rc34.speed = 500.0;
			rc35.pos = pos_circuito3_5;
			rc35.speed = 500.0;
			rc36.pos = pos_circuito3_6;
			rc36.speed = 500.0;
			rc37.pos = pos_circuito3_7;
			rc37.speed = 500.0;
			rc38.pos = pos_circuito3_8;
			rc38.speed = 500.0;
			rc39.pos = pos_circuito3_9;
			rc39.speed = 500.0;
			rc310.pos = pos_circuito3_10;
			rc310.speed = 500.0;
			rc311.pos = pos_circuito3_11;
			rc311.speed = 500.0;

			ra0.pos = pos_aterrizaje_0;
			ra0.speed = 500.0;
			ra1.pos = pos_aterrizaje_1;
			ra1.speed = 100.0;
			ra2.pos = pos_aterrizaje_2;
			ra2.speed = 19.0;
			ra3.pos = pos_aterrizaje_3;
			ra3.speed = 15.0;


			if(!Airport::getInstance()->is_booked_landing())
			{
				Flight* primero = *(flights.begin());
				primero->getRoute()->clear();
			}

			for(it = flights.begin(); it!=flights.end(); ++it)
			{
				if((*it)->getRoute()->empty())
				{
					if((Airport::getInstance()->is_booked_landing()) && ((*it)->getPosition().get_y() <= 4000) && (-4000 <= (*it)->getPosition().get_y()))
					{
						(*it)->getRoute()->push_front(rc30);
						(*it)->getRoute()->push_back(rc31);
						(*it)->getRoute()->push_back(rc32);
						(*it)->getRoute()->push_back(rc33);
						(*it)->getRoute()->push_back(rc34);
						(*it)->getRoute()->push_back(rc35);
						(*it)->getRoute()->push_back(rc36);
						(*it)->getRoute()->push_back(rc37);
						(*it)->getRoute()->push_back(rc38);
						(*it)->getRoute()->push_back(rc39);
						(*it)->getRoute()->push_back(rc310);
						(*it)->getRoute()->push_back(rc311);

					}else if((Airport::getInstance()->is_booked_landing()) && ((*it)->getPosition().get_y() < -4000))
					{
						(*it)->getRoute()->push_front(rc20);
						(*it)->getRoute()->push_back(rc21);
						(*it)->getRoute()->push_back(rc22);
						(*it)->getRoute()->push_back(rc23);
						(*it)->getRoute()->push_back(rc24);
						(*it)->getRoute()->push_back(rc25);
						(*it)->getRoute()->push_back(rc26);
						(*it)->getRoute()->push_back(rc27);
						(*it)->getRoute()->push_back(rc28);
						(*it)->getRoute()->push_back(rc29);
						(*it)->getRoute()->push_back(rc210);
						(*it)->getRoute()->push_back(rc211);

					}else if((Airport::getInstance()->is_booked_landing()) && ((*it)->getPosition().get_y() > 4000))
					{
						(*it)->getRoute()->push_front(rc10);
						(*it)->getRoute()->push_back(rc11);
						(*it)->getRoute()->push_back(rc12);
						(*it)->getRoute()->push_back(rc13);
						(*it)->getRoute()->push_back(rc14);
						(*it)->getRoute()->push_back(rc15);
						(*it)->getRoute()->push_back(rc16);
						(*it)->getRoute()->push_back(rc17);
						(*it)->getRoute()->push_back(rc18);
						(*it)->getRoute()->push_back(rc19);
						(*it)->getRoute()->push_back(rc110);
						(*it)->getRoute()->push_back(rc111);


					}else{
						Airport::getInstance()->book_landing((*it)->getId());
						(*it)->getRoute()->push_back(ra0);
						(*it)->getRoute()->push_back(ra1);
						(*it)->getRoute()->push_back(ra2);
						(*it)->getRoute()->push_back(ra3);
					}
				}
			}


}
