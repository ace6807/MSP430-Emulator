/*                                                                             
  This file is part of MSP430 Emulator                                         
                                                                               
  MSP430 Emulator is free software: you can redistribute it and/or modify               
  it under the terms of the GNU General Public License as published by         
  the Free Software Foundation, either version 3 of the License, or            
  (at your option) any later version.                                          
                                                                               
  MSP430 Emulator is distributed in the hope that it will be useful,                    
  but WITHOUT ANY WARRANTY; without even the implied warranty of               
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                
  GNU General Public License for more details.                                 
                                                                               
  You should have received a copy of the GNU General Public License            
  along with MSP430 Emulator.  If not, see <http://www.gnu.org/licenses/>.
*/

void dump_memory(uint8_t *MEM, uint32_t size, uint32_t start_addr, 
		 uint8_t stride);

void handle_sigint(int signal);
void display_registers();
void command_loop();

#include "debugger.c"
