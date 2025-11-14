// 函数: sub_6827a0
// 地址: 0x6827a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg2

if (result s>= 0)
    void* esi_1 = data_75d4cc
    arg2 = result
    int32_t* result_1
    sub_42f3d0(esi_1 + 0x2a0, &result_1, &arg2)
    result = result_1
    
    if (result != *(esi_1 + 0x2a0))
        void* edi_1 = result[5]
        
        if (edi_1 != 0)
            int32_t* edi_2 = *(edi_1 + 0xd8)
            arg2 = edi_2
            
            if (edi_2 != 0)
                void* esi_2 = (*(*edi_2 + 8))(0, 0)
                int32_t ebx_1 = (*(*edi_2 + 0x10))()
                int32_t var_10_1 = ebx_1
                int32_t eax_4 = (*(*edi_2 + 0x14))()
                int32_t eax_5 = (*(*edi_2 + 0x18))()
                int32_t eax_6 = (*(*edi_2 + 0x10))()
                result_1 = (*(*arg2 + 0x1c))() - ((eax_6 * eax_5) u>> 3)
                __builtin_memset(arg1 + 0x58, 0, 0x11)
                *(arg1 + 0x50) = *(arg1 + 0x4c)
                
                if (ebx_1 != 0 && eax_4 != 0)
                    *(arg1 + 0x5c) = eax_4
                    void* eax_11 = ((ebx_1 << 2) + 0xf) & 0xfffffff0
                    *(arg1 + 0x68) = 1
                    *(arg1 + 0x60) = eax_11
                    *(arg1 + 0x58) = ebx_1
                    *(arg1 + 0x64) = 4
                    sub_67d840(arg1 + 0x4c, eax_11 * eax_4)
                
                int32_t* ebp_2 = *(arg1 + 8)
                arg2 = ebp_2
                sub_697220(arg1 + 0x9c)
                
                if (ebp_2 == 0)
                    arg2 = GetDesktopWindow()
                
                *(arg1 + 0xb4) = ((ebx_1 << 2) + 0xf) & 0xfffffff0
                *(arg1 + 0xa4) = ebx_1
                *(arg1 + 0xa8) = eax_4
                *(arg1 + 0xac) = 0x20
                *(arg1 + 0xb0) = 4
                int32_t* pbmi_1
                sub_448e90(&pbmi_1, 0x28)
                *(arg1 + 0xb0)
                int32_t* pbmi = pbmi_1
                int32_t* hWnd_1 = arg2
                pbmi[1] = divs.dp.d(sx.q(*(arg1 + 0xb4)), *(arg1 + 0xb0))
                *pbmi = 0x28
                pbmi[2] = 0xffffffff - eax_4
                pbmi[3] = 0x200001
                __builtin_memset(&pbmi[4], 0, 0x18)
                HDC eax_20 = GetDC(hWnd_1)
                HBITMAP eax_21 =
                    CreateDIBSection(eax_20, pbmi, DIB_RGB_COLORS, arg1 + 0xbc, nullptr, 0)
                *(arg1 + 0xb8) = eax_21
                
                if (eax_21 != 0)
                    HDC hdc = CreateCompatibleDC(eax_20)
                    *(arg1 + 0xc0) = hdc
                    
                    if (hdc != 0)
                        HGDIOBJ eax_22 = SelectObject(hdc, *(arg1 + 0xb8))
                        HWND hWnd = arg2
                        *(arg1 + 0xc4) = eax_22
                        ReleaseDC(hWnd, eax_20)
                        *(arg1 + 0xc8) = arg2
                        *(arg1 + 0xa0) = 1
                    else
                        ReleaseDC(arg2, eax_20)
                else
                    ReleaseDC(arg2, eax_20)
                
                j__free(pbmi)
                sub_6972e0(arg1 + 0x9c, *(arg1 + 0x30), *(arg1 + 0x31), *(arg1 + 0x32))
                int32_t eax_27 = eax_4
                int32_t ebp_5 = 0
                
                if (eax_27 != 0)
                    int32_t* result_2 = result_1
                    
                    do
                        int32_t edx_9 = 0
                        
                        if (ebx_1 != 0)
                            do
                                eax_27.b = *(esi_2 + 1)
                                ebx_1.b = 0xff
                                ebx_1:1.b = *esi_2
                                char var_25_1 = eax_27.b
                                eax_27.b = *(esi_2 + 2)
                                esi_2 += 3
                                arg2.b = eax_27.b
                                
                                if (eax_5 == 0x20)
                                    ebx_1.b = *esi_2
                                    esi_2 += 1
                                
                                if (*(arg1 + 0x68) != 0 && ebp_5 u< *(arg1 + 0x5c)
                                        && edx_9 u< *(arg1 + 0x58))
                                    eax_27.b = arg2.b
                                    char* ecx_23 = *(arg1 + 0x64) * edx_9 + *(arg1 + 0x60) * ebp_5
                                        + *(arg1 + 0x4c)
                                    *ecx_23 = eax_27.b
                                    eax_27.b = var_25_1
                                    ecx_23[1] = eax_27.b
                                    ecx_23[2] = ebx_1:1.b
                                    ecx_23[3] = ebx_1.b
                                
                                ebx_1 = var_10_1
                                edx_9 += 1
                            while (edx_9 u< ebx_1)
                            
                            eax_27 = eax_4
                            result_2 = result_1
                        
                        ebp_5 += 1
                        esi_2 += result_2
                    while (ebp_5 u< eax_27)
                
                void* edx_10 = *(arg1 + 0x5c)
                int32_t eax_29 = *(arg1 + 0x58)
                void* var_4c_2 = edx_10
                int32_t var_50_2 = eax_29
                return sub_67d680(arg1 + 0x48, (*(*(arg1 + 0x9c) + 8))(0, 0), eax_29, edx_10)

return result
