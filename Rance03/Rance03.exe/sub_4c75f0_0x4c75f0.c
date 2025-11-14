// 函数: sub_4c75f0
// 地址: 0x4c75f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = 0
int32_t edx = 0
int32_t edi = arg1[4]

if (edi s<= 0)
    return eax

do
    int32_t* ecx_1
    
    if (arg1[5] u< 0x10)
        ecx_1 = arg1
    else
        ecx_1 = *arg1
    
    ecx_1.b = *(ecx_1 + eax)
    
    if (ecx_1.b u< 0x81 || ecx_1.b u> 0x9f)
        ecx_1.b += 0x20
        
        if (ecx_1.b u<= 0xf)
            eax += 1
    else
        eax += 1
    
    eax += 1
    edx += 1
while (eax s< edi)

return edx
