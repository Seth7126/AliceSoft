// 函数: sub_4ed8d0
// 地址: 0x4ed8d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
void* ebx = data_75d4fc
struct partsengine::CGUIController::VTable** eax = sub_4e7cb0(ebx + 0x19c)
struct partsengine::CGUIController::VTable** result = sub_4e7cb0(ebx + 0x19c)
int32_t eax_1
int32_t ecx_3
eax_1, ecx_3 = sub_4a8650(ebx + 0x174, arg1)
int32_t ecx_4

if (eax_1 != 0xffffffff)
    ecx_4 = eax_1 + 1
else
    ecx_4 = ecx_3 | eax_1

sub_4a8470(ebx + 0x174, eax, result, ecx_4)
return result
