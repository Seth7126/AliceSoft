// 函数: sub_49eaa0
// 地址: 0x49eaa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t ebp = arg2[4]
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t ebx = *(arg1 + 0x70)
char* ecx

if (*(arg1 + 0x74) u< 0x10)
    ecx = arg1 + 0x60
else
    ecx = *(arg1 + 0x60)

int32_t eax_1 = ebp

if (ebx u< ebp)
    eax_1 = ebx

int32_t* result = sub_405190(eax_1, edx, ecx, eax_1)

if (result != 0 || ebx u< ebp)
label_49eaf3:
    
    if (arg1 + 0x60 != arg2)
        result = sub_401ff0(arg1 + 0x60, arg2, 0, 0xffffffff)
    
    int32_t* ecx_3 = *(arg1 + 0xc8)
    
    if (ecx_3 != 0)
        return (**ecx_3)()
else
    result.b = ebx != ebp
    
    if (result != 0)
        goto label_49eaf3

return result
