// 函数: sub_477ac0
// 地址: 0x477ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = sub_4046d0(arg1)
char* edx = data_7fcc74
sub_6feca0(eax, edx, data_7fcc78 - edx)
void* ecx_2 = data_7fcc74
int32_t edi_2 = (data_7fcc78 - ecx_2) s>> 2

if (ecx_2 != 0)
    sub_403160(ecx_2, (data_7fcc7c - ecx_2) s>> 2, 4)

data_7fcc74 = eax
data_7fcc7c = &eax[arg1 << 2]
void* result = &eax[edi_2 << 2]
data_7fcc78 = result
return result
