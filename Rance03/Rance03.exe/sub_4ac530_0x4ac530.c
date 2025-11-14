// 函数: sub_4ac530
// 地址: 0x4ac530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x68) != 0)
    return 

int32_t eax_1 = *(arg1 + 8)
void* edi_1 = data_75d4e0
*(arg1 + 0x68) = 1
*(arg1 + 0x54) = eax_1
*(arg1 + 0x64) = eax_1
__builtin_memset(arg1 + 0xc, 0, 0x14)
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
void var_8
void var_4
int16_t eax_2

if (sub_46cb80(edi_1).b != 0)
    eax_2 = (***(edi_1 + 0x1c))()
    
    if (eax_2.b != 0)
        if ((0x8000 & GetKeyState(1)) != 0)
            eax_2.b = (***(edi_1 + 0xc))(&var_4, &var_8).b != 0
        else
            eax_2.b = 0
else
    eax_2.b = 0

void* edi_2 = data_75d4e0
*(arg1 + 0x20) = eax_2.b
int16_t eax_7 = sub_46cb80(edi_2)

if (eax_7.b != 0)
    eax_7 = (***(edi_2 + 0x1c))()
    
    if (eax_7.b != 0)
        if ((0x8000 & GetKeyState(2)) != 0)
            eax_7.b = (***(edi_2 + 0xc))(&var_8, &var_4).b != 0
        else
            eax_7.b = 0

void* edi_3 = data_75d4e0
*(arg1 + 0x21) = eax_7.b

if (sub_46cb80(edi_3).b == 0)
label_4ac633:
    int16_t eax_12
    eax_12.b = 0
    *(arg1 + 0x22) = 0
    return 

if ((***(edi_3 + 0x1c))().b == 0)
    goto label_4ac633

if ((0x8000 & GetKeyState(4)) == 0)
    goto label_4ac633

*(arg1 + 0x22) = (***(edi_3 + 0xc))(&var_8, &var_4) != 0
