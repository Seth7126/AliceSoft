// 函数: sub_5ff9c0
// 地址: 0x5ff9c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edi_1 = data_75d528 + 0x28
int32_t ebp = arg1[4]
int32_t* edx

if (arg1[5] u< 0x10)
    edx = arg1
else
    edx = *arg1

int32_t ebx = *(edi_1 + 0x10)
char* ecx

if (*(edi_1 + 0x14) u< 0x10)
    ecx = edi_1
else
    ecx = *edi_1

int32_t eax = ebp

if (ebx u< ebp)
    eax = ebx

int32_t* result = sub_405190(eax, edx, ecx, eax)

if (result != 0 || ebx u< ebp)
label_5ffa11:
    
    if (edi_1 != arg1)
        return sub_401ff0(edi_1, arg1, 0, 0xffffffff)
else
    result.b = ebx != ebp
    
    if (result != 0)
        goto label_5ffa11

return result
