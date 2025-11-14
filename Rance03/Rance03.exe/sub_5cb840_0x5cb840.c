// 函数: sub_5cb840
// 地址: 0x5cb840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = arg1[0x82]
int32_t edx = *eax
arg1[0x82] = &eax[1]

switch (edx)
    case 0
        return sub_5cdaf0(arg1)
    case 5
        return sub_5cb9b0(arg1, edx, arg1)
    case 6
        return sub_5cb9f0(arg1)
    case 7
        return sub_5cbab0(arg1)
    case 8
        return sub_5cbc60(arg1)
    case 9
        return sub_5cbec0(arg1)
    case 0xa
        return sub_5cc100(arg1)
    case 0xb
        return sub_5cc770()
    case 0xc
        return sub_5cc840(arg1)
    case 0xd
        return sub_5ccaf0(arg1)
    case 0xe
        return sub_5cc9c0(arg1)
    case 0xf
        return sub_5ccb50(arg1)
    case 0x10
        return sub_5cc240(arg1)
    case 0x11
        return sub_5cc700(arg1)
    case 0x12
        return sub_5cbb60(arg1)
    case 0x13
        return sub_5ccfb0(arg1)
    case 0x14
        return sub_5cd0b0(arg1)
    case 0x15
        arg1[0x8d] -= 4
        int32_t* dwMilliseconds = *arg1[0x8d]
        
        if (dwMilliseconds s< 0)
            return dwMilliseconds
        
        return Sleep(dwMilliseconds)
    case 0x16
        return sub_5cd190(arg1)
    case 0x17
        return sub_5cd560(arg1)
    case 0x18
        return sub_5cdb30(arg1)
    case 0x19
        return sub_5cde70(arg1)
    case 0x1a
        return sub_5cc360(arg1)
    case 0x1b
        return sub_5cc480(arg1)
    case 0x1c
        return sub_5cc5c0(arg1)

int32_t var_8_2 = edx
return sub_5c24e0(&eax[1], edx, arg1, arg1, 0x6e8f0c)
