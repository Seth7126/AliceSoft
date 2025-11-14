// 函数: sub_5bb8b0
// 地址: 0x5bb8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg1
int32_t edx = ebx[1]
int32_t edi_2 = (edx - *ebx) s>> 4

if (edi_2 u> 1)
    struct _EXCEPTION_REGISTRATION_RECORD*** var_14_1 = arg1
    struct _EXCEPTION_REGISTRATION_RECORD*** var_18 = arg1
    sub_5b9650(edx - (edi_2 << 4) + 0x10, edx)
    ebx[1] = edx - (edi_2 << 4) + 0x10
    return 

if (edi_2 u>= 1)
    return 

sub_5bba10(arg1, 1 - edi_2)
void* ecx_2 = ebx[1]
struct _EXCEPTION_REGISTRATION_RECORD*** var_14_3 = arg1
sub_5bba90(ecx_2, 1 - ((ecx_2 - *ebx) s>> 4))
int32_t ecx_3 = ebx[1]
ebx[1] = ecx_3 - ((ecx_3 - *ebx) & 0xfffffff0) + 0x10
