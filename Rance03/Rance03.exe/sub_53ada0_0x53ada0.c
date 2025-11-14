// 函数: sub_53ada0
// 地址: 0x53ada0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_410
int32_t eax_1 = __security_cookie ^ &var_410
void* ebp = arg1
var_410 = ebp

if (*(ebp + 0x28) == 0)
    *(ebp + 0x30) = 0
    sub_69a5bc(eax_1 ^ &var_410)
    return eax_1

void* ebx = ebp + 0x18

if (*(ebp + 0x2c) u>= 0x10)
    ebx = *ebx

struct sealengine::CCRC::VTable* var_408
struct sealengine::CCRC::VTable** eax_2 = sub_52ed60(&var_408)
int32_t ecx_3 = 0xffffffff
int32_t eax_3 = *(ebp + 0x28)
int32_t edi = 0

if (eax_3 != 0)
    do
        uint32_t esi_1 = zx.d(*(ebx + edi))
        edi += 1
        ecx_3 = ecx_3 u>> 8 ^ eax_2[(esi_1 ^ zx.d(ecx_3.b)) + 1]
    while (edi u< eax_3)
    
    ebp = var_410

*(ebp + 0x30) = not.d(ecx_3)
sub_69a5bc(eax_1 ^ &var_410)
return eax_3
