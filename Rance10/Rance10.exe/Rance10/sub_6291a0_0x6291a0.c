// 函数: sub_6291a0
// 地址: 0x6291a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1[0xb]

if (ecx != 0)
    sub_403160(ecx, (arg1[0xd] - ecx) s>> 2, 4)
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

*arg1 = &sys43vm::CPage::`vftable'
int32_t lpMem = arg1[4]
arg1[3] = &memory::CFastMemory::`vftable'

if (lpMem != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem)

int32_t result = arg1[2]

if (result == 0)
    return result

int32_t __saved_esi_1 = 4
return operator new(result)
