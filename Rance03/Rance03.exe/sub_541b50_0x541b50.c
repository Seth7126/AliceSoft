// 函数: sub_541b50
// 地址: 0x541b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i_1 = arg1
void* edi = *(arg1 + 0x1c0)

if (edi == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* edi_1 = *(edi + 0x34)
int32_t esi = 0
void* i = *edi_1
i_1 = i

for (; i != edi_1; i = i_1)
    if (esi == arg2)
        i = *(i + 0x14)
        
        if (i == 0)
            break
        
        if (arg3 != i + 4)
            sub_401ff0(arg3, i + 4, 0, 0xffffffff)
        
        void* eax_1
        eax_1.b = 1
        return eax_1
    
    esi += 1
    sub_418380(&i_1)

i.b = 0
return i
