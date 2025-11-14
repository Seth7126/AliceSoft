// 函数: sub_578e90
// 地址: 0x578e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg1
int32_t edx = ebx[1]
int32_t edi_2 = (edx - *ebx) s>> 6

if (edi_2 u> arg2)
    int32_t var_10_1 = arg2
    void* esi_3 = ((arg2 - edi_2) << 6) + edx
    struct _EXCEPTION_REGISTRATION_RECORD*** var_14 = arg1
    sub_579960(esi_3, edx)
    ebx[1] = esi_3
    return 

if (edi_2 u>= arg2)
    return 

sub_5791d0(arg1, arg2 - edi_2)
void* ecx_1 = ebx[1]
int32_t var_10_3 = arg2
sub_579870(ecx_1, arg2 - ((ecx_1 - *ebx) s>> 6))
ebx[1] += (arg2 - ((ebx[1] - *ebx) s>> 6)) << 6
