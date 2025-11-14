// 函数: sub_4731a0
// 地址: 0x4731a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t edi
int32_t var_8 = edi
int32_t* i = arg2

if (i == 0)
    int32_t eax
    eax.b = 0
    return eax

EnterCriticalSection(*(arg1 + 0x1c) + 4)
char eax_5 = (*(*i[1] + 0xc))()
void** ecx_1 = *(arg1 + 0x10)
arg2.b = eax_5
void** edx = *ecx_1

if (edx != ecx_1)
    while (edx[2] != i)
        edx = *edx
        
        if (edx == ecx_1)
            break

int32_t esi
int32_t var_c_1 = esi
*edx[1] = *edx
*(*edx + 4) = edx[1]
*(arg1 + 0x14) -= 1
j__free(edx)
(**i)(1)
LeaveCriticalSection(*(arg1 + 0x1c) + 4)
int32_t eax_11
eax_11.b = __return_addr.b
return eax_11
