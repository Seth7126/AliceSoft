// 函数: sub_4ac230
// 地址: 0x4ac230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t edi_2 = (edx - *arg1) s>> 4

if (edi_2 u> arg2)
    int32_t var_10_1 = arg2
    int32_t* esi_3 = ((arg2 - edi_2) << 4) + edx
    int32_t* var_14_1 = arg1
    sub_4ac590(esi_3, edx)
    arg1[1] = esi_3
    return 

if (edi_2 u>= arg2)
    return 

sub_4ac370(arg1, arg2 - edi_2)
void* ecx_1 = arg1[1]
int32_t var_10_3 = arg2
void* var_14_2 = ecx_1
sub_4ac550(ecx_1, arg2 - ((ecx_1 - *arg1) s>> 4))
arg1[1] += (arg2 - ((arg1[1] - *arg1) s>> 4)) << 4
