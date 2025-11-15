// 函数: sub_5cb7b0
// 地址: 0x5cb7b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg2
sub_6ca100(arg3, 0)
int32_t eax = esi[5]
int32_t edx = esi[4]
void** ecx

if (eax u< 0x10)
    ecx = esi
else
    ecx = *esi

if (eax u>= 0x10)
    esi = *esi

int32_t var_24 = 0.d
sub_6ca200(arg3 + 4, *(arg3 + 8), esi, ecx + edx)
char var_d = 0
sub_4263a0(arg3 + 4, &var_d)
sub_6ca100(arg3, 0)
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = muls.dp.d(0x2aaaaaab, arg4[1] - *arg4)
int32_t edx_2 = edx_1 s>> 1
sub_6ca100(arg3, (edx_2 u>> 0x1f) + edx_2)
int32_t edi = arg4[1]
char var_c

for (int32_t* i = *arg4; i != edi; i = &i[3])
    var_c.d = *i * 39.370079f
    sub_6ca100(arg3, var_c.d)
    var_c.d = i[1] f* 39.370079f
    sub_6ca100(arg3, var_c.d)
    var_c.d = i[2] f* 39.370079f
    sub_6ca100(arg3, var_c.d)
    var_d = 0
    sub_4263a0(arg3 + 4, &var_d)
    var_d = 0
    sub_4263a0(arg3 + 4, &var_d)

sub_6ca100(arg3, 3)
var_c.d = 0
int32_t i_3 = 6
int32_t i_1

do
    sub_6ca100(arg3, 0)
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
sub_6ca100(arg3, i_3)
sub_6ca100(arg3, i_3)
int32_t* arg_8
int32_t* esi_2 = arg_8
sub_6ca100(arg3, (esi_2[1] - *esi_2) s>> 4)
int32_t edi_1 = esi_2[1]

for (int32_t* i_2 = *esi_2; i_2 != edi_1; i_2 = &i_2[4])
    int32_t eax_9 = sub_6cab20(i_2)
    arg_8.b = eax_9.b
    sub_4263a0(arg3 + 4, &arg_8)
    arg_8.b = (eax_9 u>> 8).b
    sub_4263a0(arg3 + 4, &arg_8)
    arg_8.b = (eax_9 u>> 0x10).b
    sub_4263a0(arg3 + 4, &arg_8)
    arg_8.b = (eax_9 u>> 0x18).b
    sub_4263a0(arg3 + 4, &arg_8)

sub_6ca100(arg3, 0)
sub_6ca100(arg3, 0)
return sub_5cb9b0(arg3, arg4) __tailcall
