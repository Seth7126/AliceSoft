// 函数: __stbuf
// 地址: 0x6a67ca
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = sub_6aa1a8(__fileno(arg1))

if (result == 0)
    return result

int32_t edi_1

if (arg1 == 0x74a198)
    edi_1 = 0
label_6a6807:
    data_75c914 += 1
    
    if ((arg1[3] & 0x10c) == 0)
        int32_t eax_1
        
        if (*((edi_1 << 2) + &data_75d300) == 0)
            eax_1 = sub_69e76b(0x1000)
            *((edi_1 << 2) + &data_75d300) = eax_1
        
        if (*((edi_1 << 2) + &data_75d300) != 0 || eax_1 != 0)
            int32_t ecx_2 = *((edi_1 << 2) + &data_75d300)
            arg1[2] = ecx_2
            *arg1 = ecx_2
            arg1[6] = 0x1000
            arg1[1] = 0x1000
        else
            arg1[2] = &arg1[5]
            *arg1 = &arg1[5]
            arg1[6] = 2
            arg1[1] = 2
        
        arg1[3] |= 0x1102
        return 1
else if (arg1 == 0x74a1b8)
    edi_1 = 1
    goto label_6a6807
return 0
