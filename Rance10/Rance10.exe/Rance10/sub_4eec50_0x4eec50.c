// 函数: sub_4eec50
// 地址: 0x4eec50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735c59
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x74)
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    ebx = arg3

if (ecx == 0)
    goto label_4eecaf

int32_t eax_4 = (*(*ecx + 0xc))(eax_2)
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    eax_5 = (*(**(arg1 + 0x74) + 8))(arg3)
bool cond:0_1

if (arg2 s> 0x10)
    cond:0_1 = eax_5 == arg2
else
    cond:0_1 = eax_4 == arg2

eax_5.b = cond:0_1

if (eax_5.b == 0)
    ebx = arg3
label_4eecaf:
    int32_t* ecx_2 = *(arg1 + 0x74)
    
    if (ecx_2 != 0 && arg2 s>= 0x10 && (*(*ecx_2 + 0xc))(eax_2) s>= 0x10)
        struct 
            common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
            ** eax_8 = sub_555e00(*(*(arg1 + 0x74) + 0x44), arg2, ebx)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    int32_t* ecx_7 = *(arg1 + 0x74)
    
    if (ecx_7 != 0)
        (*(*ecx_7 + 4))(eax_2)
        *(arg1 + 0x74) = 0
    
    int32_t var_8_19
    
    if (arg2 u<= 0xf)
        switch (arg2)
            case nullptr
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_10 = sub_6e810c(0x224)
                arg3 = eax_10
                void* var_24_3 = arg1
                int32_t var_8_1 = 0
                int32_t var_28_2 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4e1640(eax_10, *(arg1 + 0x80))
            case 1
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_12 = sub_6e810c(0x1f8)
                arg3 = eax_12
                void* var_24_4 = arg1
                int32_t var_8_2 = 1
                int32_t var_28_3 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4e6390(eax_12, *(arg1 + 0x80))
            case 2
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_13 = sub_6e810c(0x2f0)
                arg3 = eax_13
                void* var_24_5 = arg1
                int32_t var_8_3 = 2
                int32_t var_28_4 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_520cf0(eax_13, *(arg1 + 0x80))
            case 3
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_14 = sub_6e810c(0x2f0)
                arg3 = eax_14
                void* var_24_6 = arg1
                int32_t var_8_4 = 3
                int32_t var_28_5 = *(arg1 + 0x78)
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
                    ** eax_15 = sub_520cf0(eax_14, *(arg1 + 0x80))
                int32_t var_8_5 = 0xffffffff
                *(arg1 + 0x74) = eax_15
                sub_521360(eax_15)
            case 4
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_16 = sub_6e810c(0x1c4)
                arg3 = eax_16
                void* var_24_7 = arg1
                int32_t var_8_6 = 4
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_51dd50(eax_16, *(arg1 + 0x80), *(arg1 + 0x78))
            case 5
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_17 = sub_6e810c(0x19c)
                arg3 = eax_17
                void* var_24_8 = arg1
                int32_t var_8_7 = 5
                int32_t var_28_7 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_501850(eax_17, *(arg1 + 0x80))
            case 6
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_18 = sub_6e810c(0x224)
                arg3 = eax_18
                void* var_24_9 = arg1
                int32_t var_8_8 = 6
                int32_t var_28_8 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4ebe00(eax_18, *(arg1 + 0x80))
            case 7
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_19 = sub_6e810c(0x230)
                arg3 = eax_19
                void* var_24_10 = arg1
                int32_t var_8_9 = 7
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_50bbf0(eax_19, *(arg1 + 0x80), *(arg1 + 0x78))
            case 8
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_20
                int32_t ecx_17
                eax_20, ecx_17 = sub_6e810c(0x80)
                arg3 = eax_20
                void* var_24_11 = arg1
                int32_t var_8_10 = 8
                int32_t var_28_10 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4fdeb0(eax_20, ecx_17)
            case 9
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_21
                int32_t ecx_19
                eax_21, ecx_19 = sub_6e810c(0x60)
                arg3 = eax_21
                void* var_24_12 = arg1
                int32_t var_8_11 = 9
                int32_t var_28_11 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_51a770(eax_21, ecx_19)
            case 0xa
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_22 = sub_6e810c(0x1d8)
                arg3 = eax_22
                void* var_24_13 = arg1
                int32_t var_8_12 = 0xa
                int32_t var_28_12 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4c1530(eax_22, *(arg1 + 0x80))
            case 0xb
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_23 = sub_6e810c(0x160)
                arg3 = eax_23
                int32_t var_8_13 = 0xb
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4b76d0(eax_23, *(arg1 + 0x80), *(arg1 + 0x78), arg1)
            case 0xc
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_24 = sub_6e810c(0xd8)
                arg3 = eax_24
                void* var_24_15 = arg1
                int32_t var_8_14 = 0xc
                int32_t var_28_14 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4b4540(eax_24, *(arg1 + 0x80))
            case 0xd
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_25 = sub_6e810c(0x174)
                arg3 = eax_25
                void* var_24_16 = arg1
                int32_t var_8_15 = 0xd
                int32_t var_28_15 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4b1ed0(eax_25, *(arg1 + 0x80))
            case 0xe
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_26 = sub_6e810c(0xc4)
                arg3 = eax_26
                void* var_24_17 = arg1
                int32_t var_8_16 = 0xe
                int32_t var_28_16 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4acb60(eax_26, *(arg1 + 0x80))
            case 0xf
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_27
                int32_t ecx_26
                eax_27, ecx_26 = sub_6e810c(0x68)
                arg3 = eax_27
                void* var_24_18 = arg1
                int32_t var_8_17 = 0xf
                int32_t var_28_17 = *(arg1 + 0x78)
                var_8_19 = 0xffffffff
                *(arg1 + 0x74) = sub_4b94d0(eax_27, ecx_26)
    else if (arg2 s>= 0x10)
        struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
            ** eax_28 = sub_6e810c(0x54)
        arg3 = eax_28
        void* var_24_19 = arg1
        int32_t var_8_18 = 0x10
        int32_t var_28_18 = *(arg1 + 0x78)
        var_8_19 = 0xffffffff
        *(arg1 + 0x74) = sub_516f30(eax_28, *(arg1 + 0x80))
    eax_5 = arg2 - 0x11
    
    if (eax_5 u<= 0xb)
        eax_5 = sub_555e00(*(*(arg1 + 0x74) + 0x44), arg2, ebx)
    
    int32_t* ecx_31 = *(arg1 + 0x74)
    
    if (ecx_31 != 0)
        eax_5 = (*(*ecx_31 + 8))(1)
        
        if (eax_5 == 0xc || eax_5 == 0xd)
            int32_t eax_31 = (*(**(arg1 + 0x74) + 0x24))(1)
            int32_t* ecx_33 = *(arg1 + 0x74)
            *(arg1 + 0x320) = eax_31
            eax_5 = (*(*ecx_33 + 0x28))(1)
            *(arg1 + 0x324) = eax_5

fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
