// 函数: sub_61ce50
// 地址: 0x61ce50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t eax = data_75de64
void* esi = data_75d530

if ((eax.b & 1) == 0)
    data_75de68 = &common::CStringWrapper::`vftable'{for `IString'}
    data_75de64 = eax | 1
    data_75de80 = 0xf
    data_75de7c = 0
    data_75de6c = 0
    ecx = _atexit(sub_6d2f70)

if (*(esi + 4) != 0)
label_61cec9:
    void** eax_5 = *(esi + 4) + 4
    
    if (eax_5[5] u>= 0x10)
        eax_5 = *eax_5
    
    (*(data_75de68 + 4))(eax_5)
else if (data_75d534 != 0)
    int32_t var_c_1 = ecx
    int32_t* eax_2 = sub_6203f0()
    
    if (eax_2 != 0)
        int32_t eax_3 = (**eax_2)(&data_6ecca8)
        *(esi + 4) = eax_3
        
        if (eax_3 != 0)
            goto label_61cec9

return &data_75de68
