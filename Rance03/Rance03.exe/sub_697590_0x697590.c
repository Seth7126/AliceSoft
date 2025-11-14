// 函数: sub_697590
// 地址: 0x697590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*arg1 == 0)
    if (CoCreateInstance(&data_6d9f98, 0, CLSCTX_INPROC_SERVER, &data_6d9f88, arg1) s< 0)
        sub_64b530("DirectDraw")
        enum MESSAGEBOX_RESULT eax_2
        eax_2.b = 0
        return eax_2
    
    int32_t* eax_3 = *arg1
    
    if ((*(*eax_3 + 0x48))(eax_3, 0) s< 0)
        sub_64b530("IDirectDraw2::Initialize()")
        enum MESSAGEBOX_RESULT eax_5
        eax_5.b = 0
        return eax_5
    
    *(arg1 + 0x11) = 1
    arg1[2] = arg1[1]
    int32_t* eax_7 = *arg1
    
    if ((*(*eax_7 + 0x20))(eax_7, 0, 0, arg1, sub_6973b0) s< 0)
        sub_64b530(0x708e58)
        enum MESSAGEBOX_RESULT eax_8
        eax_8.b = 0
        return eax_8

int32_t eax
eax.b = 1
return eax
