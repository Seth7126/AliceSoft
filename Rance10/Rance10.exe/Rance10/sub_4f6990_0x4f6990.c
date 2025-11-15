// 函数: sub_4f6990
// 地址: 0x4f6990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcba4
void* edi = data_7fcb48
EnterCriticalSection(*(edi + 0x18) + 4)
int32_t ebx

if (*(edi + 0x20) != 0 || *(edi + 0x40) != 0)
    ebx.b = 1
else
    ebx.b = 0

LeaveCriticalSection(*(edi + 0x18) + 4)

if (ebx.b == 0)
    EnterCriticalSection(*(esi + 0x18) + 4)
    
    if (*(esi + 0x20) != 0 || *(esi + 0x40) != 0)
        ebx.b = 1
    else
        ebx.b = 0
    
    LeaveCriticalSection(*(esi + 0x18) + 4)
    
    if (ebx.b == 0)
        return sub_523220(esi + 0x9c) != 0

int32_t result
result.b = 1
return result
