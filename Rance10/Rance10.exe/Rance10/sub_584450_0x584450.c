// 函数: sub_584450
// 地址: 0x584450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i_1 = arg1
__Smtx_lock_shared(&arg1[0x80])
int32_t esi = arg1[0x7f]
__Smtx_unlock_shared(&arg1[0x80])

if (esi == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t ebx = 0
__Smtx_lock_shared(&arg1[0x80])
void* edi_1 = arg1[0x7f]
__Smtx_unlock_shared(&arg1[0x80])
int32_t* esi_2 = *(edi_1 + 0x48)
int32_t* i = *esi_2
i_1 = i

for (; i != esi_2; i = i_1)
    if (ebx == arg2)
        i = i[5]
        
        if (i == 0)
            break
        
        if (arg3 != i)
            sub_403590(arg3, i, 0, 0xffffffff)
        
        i.b = 1
        return i
    
    ebx += 1
    sub_429080(&i_1)

i.b = 0
return i
