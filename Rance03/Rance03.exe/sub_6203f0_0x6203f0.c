// 函数: sub_6203f0
// 地址: 0x6203f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
void* edi = data_75d534
void** eax = sub_456210(edi + 4, 0x6ed2a0)
void** ebx = *(edi + 4)
void** var_4
char eax_2

if (eax != ebx)
    eax_2 = sub_4560c0(0x6ed2a0, &eax[4])
    var_4 = eax

if (eax == ebx || eax_2 != 0)
    var_4 = ebx

if (var_4 != ebx)
    return var_4[8]

return 0
