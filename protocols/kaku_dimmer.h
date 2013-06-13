/*
	Copyright (C) 2013 CurlyMo

	This file is part of the Raspberry Pi 433.92Mhz transceiver.

    Raspberry Pi 433.92Mhz transceiver is free software: you can redistribute
	it and/or modify it under the terms of the GNU General Public License as
	published by the Free Software Foundation, either version 3 of the License,
	or (at your option) any later version.

    Raspberry Pi 433.92Mhz transceiver is distributed in the hope that it will
	be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Raspberry Pi 433.92Mhz transceiver. If not, see
	<http://www.gnu.org/licenses/>
*/

#ifndef PROTOCOL_KAKU_DIMMER_H_
#define PROTOCOL_KAKU_DIMMER_H_

protocol_t kaku_dimmer;

void kakuDimInit();
void kakuDimParseRaw();
void kakuDimParseCode();
void kakuDimParseBinary();
void kakuDimCreateCode(struct options_t *options);
void kakuDimCreateLow(int s, int e);
void kakuDimCreateHigh(int s, int e);
void kakuDimClearCode();
void kakuDimCreateStart();
void kakuDimCreateId(int id);
void kakuDimCreateAll(int all);
void kakuDimCreateState(int state);
void kakuDimCreateUnit(int unit);
void kakuDimCreateDimlevel(int dimlevel);
void kakuDimCreateFooter();
void kakuDimPrintHelp();

#endif
