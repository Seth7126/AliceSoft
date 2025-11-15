// 函数: sub_606240
// 地址: 0x606240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t edi_2 = (edx - *arg1) s>> 4

if (edi_2 u> arg2)
    int32_t var_10_1 = arg2
    void* esi_3 = ((arg2 - edi_2) << 4) + edx
    int32_t* var_14_1 = arg1
    sub_570210(esi_3, edx)
    arg1[1] = esi_3
    return 

if (edi_2 u>= arg2)
    return 

sub_606690(arg1, arg2 - edi_2)
void* ecx_1 = arg1[1]
int32_t var_10_3 = arg2
void* var_14_2 = ecx_1
sub_606ce0(ecx_1, arg2 - ((ecx_1 - *arg1) s>> 4))
arg1[1] += (arg2 - ((arg1[1] - *arg1) s>> 4)) << 4
