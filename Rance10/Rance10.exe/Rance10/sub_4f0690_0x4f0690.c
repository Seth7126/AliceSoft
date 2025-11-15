// 函数: sub_4f0690
// 地址: 0x4f0690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x74)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x74) = 0

*(arg1 + 0x68) = arg1
char* eax_2

if (sub_504900(arg1 + 0x84, arg2, arg3).b != 0)
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u<= *(arg3 + 8))
        int32_t ecx_8 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) = &edx_1[4]
        int32_t var_18_3
        uint32_t var_14_3
        int32_t* eax_5
        
        switch (ecx_8)
            case 0
                sub_4eec50(arg1, nullptr, 1)
                void* ecx_10 = *(arg1 + 0x74)
                *(ecx_10 + 0x20) = 1
                eax_2 = sub_4dff20(ecx_10 + 0xa4, arg2, arg3)
            label_4f0757:
                
                if (eax_2.b != 0)
                    goto label_4f08f1
            case 1
                sub_4eec50(arg1, 1, 1)
                void* ecx_13 = *(arg1 + 0x74)
                *(ecx_13 + 0x20) = 1
                eax_2 = sub_4e4120(ecx_13 + 0xe4, arg2, arg3)
                goto label_4f0757
            case 2
                var_14_3 = arg3
                var_18_3 = arg2
                eax_5 = sub_4ef140(arg1)
            label_4f0752:
                eax_2 = sub_522b40(eax_5, var_18_3, var_14_3)
                goto label_4f0757
            case 3
                var_14_3 = arg3
                var_18_3 = arg2
                eax_5 = sub_4ef220(arg1)
                goto label_4f0752
            case 4
                sub_4eec50(arg1, 4, 1)
                eax_2 = sub_5207c0(*(arg1 + 0x74), arg2, arg3)
                goto label_4f0757
            case 5
                int32_t var_18_5 = ecx_8
                eax_2 = sub_502de0(sub_4ef320(arg1), arg3)
                goto label_4f0757
            case 6
                eax_2 = sub_4ed130(sub_4ef400(arg1), arg2, arg3)
                goto label_4f0757
            case 7
                eax_2 = sub_510000(sub_4ef4e0(arg1), arg2, arg3)
                goto label_4f0757
            case 8
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUILayoutBoxView::VTable
                    ** eax_9 = sub_4ef5c0(arg1)
                uint32_t var_14_8 = arg3
                eax_9[8].b = 1
                eax_2 = sub_4fd660(&eax_9[0x10], arg2)
                goto label_4f0757
            case 9
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIRadioButtonBoxView::VTable
                    ** eax_10 = sub_4ef6a0(arg1)
                eax_10[8].b = 1
                
                if (sub_51a0e0(&eax_10[0x10], arg3).b != 0)
                    sub_51a9d0(eax_10)
                    sub_4ef0b0(arg1)
                    int32_t eax_11
                    eax_11.b = 1
                    return eax_11
            case 0xa
                uint32_t var_14_10 = arg3
                eax_2 = sub_4c2590(sub_4ef780(arg1), ecx_8)
                goto label_4f0757
            case 0xb
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUISpinBoxView::VTable
                    ** eax_13
                void* ecx_35
                eax_13, ecx_35 = sub_4ef860(arg1)
                uint32_t var_14_11 = arg3
                eax_13[8].b = 1
                
                if (sub_4b5460(&eax_13[0x2c], ecx_35).b != 0)
                    eax_13[0x2b] = eax_13[0x3d]
                    sub_4ef0b0(arg1)
                    int32_t eax_15
                    eax_15.b = 1
                    return eax_15
            case 0xc
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable
                    ** eax_16
                void* ecx_39
                eax_16, ecx_39 = sub_4ef940(arg1)
                uint32_t var_14_12 = arg3
                eax_16[8].b = 1
                eax_2 = sub_4b3f80(&eax_16[0x29], ecx_39)
                goto label_4f0757
            case 0xd
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable
                    ** eax_17 = sub_4efa20(arg1)
                eax_17[8].b = 1
                eax_2 = sub_4ae500(&eax_17[0x39], arg2, arg3)
                goto label_4f0757
            case 0xe
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_18
                void* ecx_44
                eax_18, ecx_44 = sub_4efb00(arg1)
                uint32_t var_14_14 = arg3
                eax_18[8].b = 1
                eax_2 = sub_4abd50(&eax_18[0x28], ecx_44)
                goto label_4f0757
            case 0xf
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIUserComponentView::VTable
                    ** eax_19
                void* ecx_47
                eax_19, ecx_47 = sub_4efbe0(arg1)
                uint32_t var_14_15 = arg3
                eax_19[8].b = 1
                eax_2 = sub_4b8aa0(&eax_19[0x10], ecx_47)
                goto label_4f0757
            case 0x10
                if (sub_5564b0(*(sub_4efcc0(arg1) + 0x44), arg2, arg3).b != 0)
                label_4f08f1:
                    sub_4ef0b0(arg1)
                    int32_t eax_21
                    eax_21.b = 1
                    return eax_21

eax_2.b = 0
return eax_2
