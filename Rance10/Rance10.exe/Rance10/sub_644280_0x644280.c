// 函数: sub_644280
// 地址: 0x644280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result
struct viewtrans::CDXTransitionType::VTable** ecx

if (*(arg1 + 0x18) == 0 && *(arg1 + 0x1c) == 0 && arg2 - 1 u<= 0x3b)
    switch (arg2 + &jump_table_644794[0x20]:3)
        case &lookup_table_644818, &lookup_table_644818[1], &lookup_table_644818[2], 
                &lookup_table_644818[3], &lookup_table_644818[4], &lookup_table_644818[5], 
                &lookup_table_644818[9], &lookup_table_644818[0xa], &lookup_table_644818[0x11], 
                &lookup_table_644818[0x12], &lookup_table_644818[0x17], &lookup_table_644818[0x1a], 
                &lookup_table_644818[0x1d], &lookup_table_644818[0x1e], &lookup_table_644818[0x1f], 
                &lookup_table_644818[0x20], &lookup_table_644818[0x22], &lookup_table_644818[0x23], 
                &lookup_table_644818[0x24], &lookup_table_644818[0x25], &lookup_table_644818[0x27], 
                &lookup_table_644818[0x28], &lookup_table_644818[0x29], &lookup_table_644818[0x2e], 
                &lookup_table_644818[0x30], &lookup_table_644818[0x31], &lookup_table_644818[0x32], 
                &lookup_table_644818[0x33]
            ecx = sub_6e810c(0x44)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionCrossFade::`vftable'{for `viewtrans::CDXTransitionType'}
            goto label_644755
        case &lookup_table_644818[6]
            ecx = sub_6e810c(0x44)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionBlindTB::`vftable'{for `viewtrans::CDXTransitionType'}
        label_644755:
            *(arg1 + 0x1c) = ecx
            goto label_644769
        case &lookup_table_644818[7]
            ecx = sub_6e810c(0x44)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionBlindLR::`vftable'{for `viewtrans::CDXTransitionType'}
            goto label_644755
        case &lookup_table_644818[8]
            ecx = sub_6e810c(0x44)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionBlindTBLR::`vftable'{for `viewtrans::CDXTransitionType'}
            goto label_644755
        case &lookup_table_644818[0xb]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx =
                &viewtrans::CDXTransitionCrossFadeTB::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].b = 1
            goto label_644755
        case &lookup_table_644818[0xc]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx =
                &viewtrans::CDXTransitionCrossFadeTB::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].b = 0
            goto label_644755
        case &lookup_table_644818[0xd]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionZoomStar::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].w = 1
            goto label_644755
        case &lookup_table_644818[0xe]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionZoomStar::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].w = 0
            goto label_644755
        case &lookup_table_644818[0xf]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionZoomStar::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].w = 0x101
            goto label_644755
        case &lookup_table_644818[0x10]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionZoomStar::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].w = 0x100
            goto label_644755
        case &lookup_table_644818[0x13]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionRotateZ::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].w = 0x101
            goto label_644755
        case &lookup_table_644818[0x14]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionRotateZ::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].w = 0x100
            goto label_644755
        case &lookup_table_644818[0x15]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionRotateZ::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].w = 1
            goto label_644755
        case &lookup_table_644818[0x16]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionRotateZ::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].w = 0
            goto label_644755
        case &lookup_table_644818[0x18]
            struct viewtrans::CDXTransitionType::VTable** eax_14 = sub_6e810c(0xd0)
            arg2 = eax_14
            *(arg1 + 0x1c) = sub_647be0(eax_14, 0, 0)
        label_644769:
            
            if ((*(**(arg1 + 0x1c) + 4))(*(arg1 + 0x2c), *(arg1 + 0x24), *(arg1 + 0x28)).b != 0)
                *(arg1 + 0x18) = 1
                result.b = 1
                return result
            
            int32_t* ecx_7 = *(arg1 + 0x1c)
            
            if (ecx_7 != 0)
                (**ecx_7)(1)
            
            *(arg1 + 0x1c) = 0
        case &lookup_table_644818[0x19]
            struct viewtrans::CDXTransitionType::VTable** eax_16 = sub_6e810c(0xd0)
            arg2 = eax_16
            *(arg1 + 0x1c) = sub_647be0(eax_16, 0, 1)
            goto label_644769
        case &lookup_table_644818[0x1b]
            struct viewtrans::CDXTransitionType::VTable** eax_18 = sub_6e810c(0xd0)
            arg2 = eax_18
            *(arg1 + 0x1c) = sub_647be0(eax_18, 1, 1)
            goto label_644769
        case &lookup_table_644818[0x1c]
            struct viewtrans::CDXTransitionType::VTable** eax_20 = sub_6e810c(0xd0)
            arg2 = eax_20
            *(arg1 + 0x1c) = sub_647be0(eax_20, 1, 0)
            goto label_644769
        case &lookup_table_644818[0x21]
            struct viewtrans::CDXTransitionType::VTable** eax_22 = sub_6e810c(0x9c)
            arg2 = eax_22
            *(arg1 + 0x1c) = sub_646710(eax_22)
            goto label_644769
        case &lookup_table_644818[0x26]
            ecx = sub_6e810c(0x4c)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionCrossFadeUneuneY::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11] = 0x3f000000
            ecx[0x12].b = 1
            goto label_644755
        case &lookup_table_644818[0x2a]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionStretchLR::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].b = 0
            goto label_644755
        case &lookup_table_644818[0x2b]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionStretchLR::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].b = 1
            goto label_644755
        case &lookup_table_644818[0x2c]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx =
                &viewtrans::CDXTransitionCrossFadeLR::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].b = 1
            goto label_644755
        case &lookup_table_644818[0x2d]
            ecx = sub_6e810c(0x48)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx =
                &viewtrans::CDXTransitionCrossFadeLR::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11].b = 0
            goto label_644755
        case &lookup_table_644818[0x2f]
            ecx = sub_6e810c(0x44)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionZoomInCrossFade::`vftable'{for `viewtrans::CDXTransitionType'}
            goto label_644755
        case &lookup_table_644818[0x35]
            ecx = sub_6e810c(0x4c)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionCrossFadeUneuneY::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11] = 0x3e800000
            ecx[0x12].b = 1
            goto label_644755
        case &lookup_table_644818[0x36]
            ecx = sub_6e810c(0x4c)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionCrossFadeUneuneY::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11] = 0x3e000000
            ecx[0x12].b = 1
            goto label_644755
        case &lookup_table_644818[0x37]
            ecx = sub_6e810c(0x4c)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionCrossFadeUneuneY::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11] = 0x3d800000
            ecx[0x12].b = 1
            goto label_644755
        case &lookup_table_644818[0x38]
            ecx = sub_6e810c(0x4c)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionCrossFadeUneuneY::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11] = 0x3f000000
            ecx[0x12].b = 0
            goto label_644755
        case &lookup_table_644818[0x39]
            ecx = sub_6e810c(0x4c)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionCrossFadeUneuneY::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11] = 0x3e800000
            ecx[0x12].b = 0
            goto label_644755
        case &lookup_table_644818[0x3a]
            ecx = sub_6e810c(0x4c)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionCrossFadeUneuneY::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11] = 0x3e000000
            ecx[0x12].b = 0
            goto label_644755
        case &lookup_table_644818[0x3b]
            ecx = sub_6e810c(0x4c)
            arg2 = ecx
            sub_648f20(ecx)
            *ecx = &viewtrans::CDXTransitionCrossFadeUneuneY::`vftable'{for `viewtrans::CDXTransitionType'}
            ecx[0x11] = 0x3d800000
            ecx[0x12].b = 0
            goto label_644755
result.b = 0
return result
