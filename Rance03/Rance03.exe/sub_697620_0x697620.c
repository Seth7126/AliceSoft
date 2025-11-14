// 函数: sub_697620
// 地址: 0x697620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[4].b != 0)
    int32_t* ecx = *arg1
    int32_t eax_2
    
    if (ecx != 0)
        eax_2 = (*(*ecx + 0x4c))(ecx)
    
    if (ecx != 0 && eax_2 s< 0)
        sub_64b530("DirectDraw")
        return 0
    
    arg1[4].b = 0

if (*arg1 == 0 && sub_697590(arg1) == 0)
    return 0

HDC eax_5 = GetDC(GetDesktopWindow())
int32_t eax_6 = GetDeviceCaps(eax_5, 0xc)
ReleaseDC(GetDesktopWindow(), eax_5)
int32_t eax_8 = sub_6974a0(arg1, arg2, arg3, eax_6)

if (eax_8 s>= 0)
    int32_t eax_9
    int32_t edx_1
    edx_1:eax_9 = muls.dp.d(0x2aaaaaab, arg1[2] - arg1[1])
    int32_t edx_2 = edx_1 s>> 1
    
    if (eax_8 s< (edx_2 u>> 0x1f) + edx_2)
        int32_t* eax_13 = *arg1
        
        if ((*(*eax_13 + 0x50))(eax_13, 0, 8) s< 0)
            sub_64b530("DirectDraw")
            enum MESSAGEBOX_RESULT eax_15
            eax_15.b = 0
            return eax_15
        
        int32_t edx_3 = arg1[1]
        int32_t esi_2 = eax_8 * 3
        int32_t* eax_17 = *arg1
        
        if ((*(*eax_17 + 0x54))(eax_17, *(edx_3 + (esi_2 << 2)), *(edx_3 + (esi_2 << 2) + 4), 
                *(edx_3 + (esi_2 << 2) + 8), 0, 0) s>= 0)
            int32_t edx_4 = arg1[1]
            *arg4 = *(edx_4 + (esi_2 << 2))
            arg1[4].b = 1
            *arg5 = *(edx_4 + (esi_2 << 2) + 4)
            int32_t* eax_22
            eax_22.b = 1
            return eax_22
        
        int32_t eax_19 = arg1[1]
        int32_t var_14_3 = *(eax_19 + (esi_2 << 2) + 8)
        int32_t var_18_3 = *(eax_19 + (esi_2 << 2) + 4)
        int32_t var_1c_3 = *(eax_19 + (esi_2 << 2))
        sub_64b530("DirectDraw")
        enum MESSAGEBOX_RESULT eax_20
        eax_20.b = 0
        return eax_20

int32_t var_14_4 = eax_6
int32_t var_18_4 = arg3
int32_t var_1c_4 = arg2
sub_64b530(0x708d80)
enum MESSAGEBOX_RESULT eax_23
eax_23.b = 0
return eax_23
