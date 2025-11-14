// 函数: sub_627190
// 地址: 0x627190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg2

if ((*(arg3 + 0x11c) & 0x20000000) != 0)
    if ((*(arg3 + 0x78) & 0x300) == 0x300)
        return 
    
    goto label_6271be

if ((*(arg3 + 0x78) & 0x800) != 0)
    return 

label_6271be:
void* edi_1 = arg4

if (edi_1 == 0)
    return 

arg1 = *(arg3 + 0x140)
void* esi_1
void* temp0_1

do
    esi_1 = edi_1
    
    if (edi_1 == 0)
        esi_1 = 0xffffffff
    
    if (ebx != 0)
        arg1 = sub_621230(arg1, ebx, arg1, esi_1)
    else
        arg1 = 0
    
    ebx += esi_1
    temp0_1 = edi_1
    edi_1 -= esi_1
while (temp0_1 != esi_1)
*(arg3 + 0x140) = arg1
