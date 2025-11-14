// 函数: sub_100160b0
// 地址: 0x100160b0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ecx
int32_t var_4 = ecx
int32_t* ecx_1 = data_100214b8

if (ecx_1 == 0 || data_100214a4 == 0)
    return 

int32_t eax_2 = (*(*ecx_1 + 0x18))(0)
int32_t ebx
ebx.b = (*(*data_100214b8 + 0x20))(0)
int32_t eax_6 = (*(*data_100214b8 + 0x18))(1)
var_4:3.b = (*(*data_100214b8 + 0x20))(1)
int32_t eax_13
int32_t edx_7
edx_7:eax_13 = muls.dp.d(0x51eb851f, eax_6 * eax_2 s/ 0x64 * data_100214c0)
int32_t edx_8 = edx_7 s>> 5
int32_t esi_5 = (edx_8 u>> 0x1f) + edx_8

if (ebx.b != 0 || var_4:3.b != ebx.b)
    esi_5 = 0

char eax = (**data_100214a4)()

if (eax == 0 && arg1 != eax)
    esi_5 = 0

if (data_100214c4 == esi_5)
    return 

int32_t* edi_2 = data_100214b0

if (edi_2 != 0)
    (*(*edi_2 + 0x1c))(edi_2, sub_10016020(esi_5))

data_100214c4 = esi_5
