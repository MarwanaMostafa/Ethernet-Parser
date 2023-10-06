#include "DataManager/ECpriPacketFile.h"
#include "Packets/ECpriPacket.h"
#include "Packets/EthernetPacket.h"
#include "Packets/RowEthernetPacket.h"
#include "Strategy/setStrategy.h"
#include <iostream>
using namespace std;
int main() {

  EthernetPacket *obj1 = new RowEthernetPacket("FB555555555555D5011B19000000ECCD655507D988F70B120040EE007F630000000005397FB111221122ABBADEADBEEFCAFEFEED0001057F0000633090181625A4E8FDEC00FECDDCEFFEFF4444444455555555CAFECC000F70B3");
  obj1->parse(); // Use obj1 as needed

  // Don't forget to delete obj1 when you're done with it
  // delete obj1;

  return 0;
}