#include "parts.h"

int update_part(Parts db, PartNumber number, PartQuantity change)
{
  Part p;
  if (!(p = find_part(db, number)))
    return -1;

  if (!set_part_on_hand(p, (get_part_on_hand(p) + change)))
    return -2;

  return 0;
}
void load(Parts db)
{
  insert_part(db, set_part(212, "Named Part, unlabled", 1, 100));
  insert_part(db, set_part(12, "Flex Wing Grooming Mower", 19, 1200));
  insert_part(db, set_part(400, "Grommet", 18, 01));
  insert_part(db, set_part(1, "Fern Spore sorter, gross", 100, 12300));
  insert_part(db, set_part(1024, "Health Meter, fin.", 30, 434200));
  insert_part(db, set_part(1989776, "Tractor Beam cowl", 30, 9990101));
  insert_part(db, set_part(98, "magneto", 11, 101));
  insert_part(db, set_part(50, "manual key sort plucker", 11, 89));
  insert_part(db, set_part(40, "Parts List Catalog Index", 19, 0));
  insert_part(db, set_part(99, "funnel lip, unfinished", 1010, 4344));
  insert_part(db, set_part(512, "caterpiller feet, left", 1010, 99));
  insert_part(db, set_part(101, "Mental Health Services", 40, 100));
  insert_part(db, set_part(2, "Gas Ring, Municipal", 18, 214798900));
  insert_part(db, set_part(30, "System flipper", 80, 1301));
  insert_part(db, set_part(35, "Stabilizers, horiz,(pair)", 90, 3000000));
  insert_part(db, set_part(97, "Sink, heat, fur", 2147483647, 123220));
  insert_part(db, set_part(401, "Tension Mount", 10, 1039));
}
