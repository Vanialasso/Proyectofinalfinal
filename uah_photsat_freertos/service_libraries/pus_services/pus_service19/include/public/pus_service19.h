/*
 * pus_service19.h
 *
 *  Created on: Oct 27, 2024
 *      Author: Oscar Rodriguez Polo
 */

/****************************************************************************
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation; either version 2
 *   of the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,USA.
 *
 *
 ****************************************************************************/

#ifndef SERVICE_LIBRARIES_PUS_SERVICES_PUS_SERVICE19_INCLUDE_PUS_SERVICE19_H_
#define SERVICE_LIBRARIES_PUS_SERVICES_PUS_SERVICE19_INCLUDE_PUS_SERVICE19_H_

#include "public/config.h"
#include "public/basic_types.h"

#include "public/pus_tc_handler.h"
#include "public/pus_tm_handler.h"
#include "public/pus_sys_data_pool.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "public/basic_types.h"
#include "public/pus_tc_handler.h"



/**
 * \brief manage the action that is associated to the event
 * \param EvID Event Identifier
 */
void pus_service19_mng_event_action(uint16_t EvID);

/* \brief calculate the number of event actions pending to be executed
 * \return return the number of event actions pending to be executed
*/
uint8_t pus_service19_pending_ev_actions();

/**
* \brief Extract event action from pending event action queue. If queue
 * is empty ptc_handler->tc_mem_descriptor.tc_num_bytes is set to 0;
 */
error_code_t pus_service19_extract_next_ev_action(tc_handler_t *ptc_handler);


/**
 * \brief executes a TC[5,X] telecommand
 * \param ptc_handler pointer to the tc handler
 */
void pus_service19_exec_tc(tc_handler_t *ptc_handler);


#ifdef __cplusplus
}
#endif

#endif /* SERVICE_LIBRARIES_PUS_SERVICES_PUS_SERVICE19_INCLUDE_PUS_SERVICE19_H_ */
