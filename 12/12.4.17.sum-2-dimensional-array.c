
#define COLS 25
#define ROWS 10

int sum_two_dimensional_array(int cols, const int a[][cols], int rows);

int main(void)
{
  const int table[ROWS][COLS] = {
    {207, 455, 849, 180, 286, 398, 1011, 482, 174, 499, 577, 312, 161, 297, 578, 1021, 494, 842, 280, 308, 210, 154, 981, 169, 139},
    {930, 122, 426, 190, 404, 181, 288, 762, 265, 555, 594, 1002, 1018, 434, 599, 489, 788, 225, 216, 961, 577, 578, 581, 394, 635},
    {96, 490, 46, 254, 22, 387, 936, 411, 511, 528, 13, 363, 105, 417, 740, 652, 142, 716, 902, 72, 347, 662, 180, 753, 833},
    {417, 619, 402, 15, 958, 459, 784, 758, 4, 136, 167, 424, 230, 89, 760, 1021, 648, 942, 431, 679, 531, 269, 833, 244, 648},
    {83, 63, 945, 372, 456, 223, 389, 45, 655, 803, 79, 488, 930, 229, 426, 910, 126, 793, 990, 560, 534, 532, 210, 192, 802},
    {479, 396, 451, 958, 772, 292, 396, 273, 323, 702, 262, 64, 208, 562, 898, 250, 769, 160, 667, 274, 540, 105, 421, 1014, 856},
    {788, 304, 1008, 88, 196, 712, 555, 148, 955, 196, 328, 252, 379, 76, 352, 199, 202, 156, 449, 80, 56, 190, 715, 383, 796},
    {613, 867, 681, 133, 939, 575, 362, 980, 271, 348, 724, 996, 1001, 819, 752, 378, 689, 877, 500, 966, 171, 324, 561, 127, 691},
    {865, 177, 950, 28, 866, 707, 688, 255, 244, 960, 71, 506, 128, 26, 443, 695, 887, 322, 1017, 548, 700, 174, 327, 35, 804},
    {432, 268, 225, 299, 783, 356, 222, 540, 729, 570, 778, 615, 284, 305, 399, 474, 895, 268, 593, 992, 863, 559, 457, 657, 420}};

  int sum; 

  /* expect 121565 */
  sum = sum_two_dimensional_array(COLS, table, ROWS);

  return 0;
}
int sum_two_dimensional_array(int cols, const int a[][cols], int rows)
{
  int sum = 0;
  const int *a_ptr;

  for (a_ptr = &a[0][0]; a_ptr <= &a[rows - 1][cols - 1]; a_ptr++)
      sum += *a_ptr;

  return sum;
}