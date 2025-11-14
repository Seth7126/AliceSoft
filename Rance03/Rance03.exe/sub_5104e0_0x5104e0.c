// 函数: sub_5104e0
// 地址: 0x5104e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x28)

if (arg2 u<= 3)
    bool cond:0_1 = (*(**(eax + (arg2 << 2)) + 8))() == 0x11
    eax = *(arg1 + 0x28)
    
    if (not(cond:0_1))
        (*(**(eax + (arg2 << 2)) + 4))()
        struct partsengine::CSprite::partsengine::CRectangleDetectionSprite::VTable** eax_4 =
            sub_69adc6(0x40)
        struct partsengine::CSprite::partsengine::CRectangleDetectionSprite::VTable** eax_5
        
        if (eax_4 == 0)
            eax_5 = nullptr
        else
            eax_5 = sub_512770(eax_4)
        
        *(*(arg1 + 0x28) + (arg2 << 2)) = eax_5
        eax = *(arg1 + 0x28)
        *(arg1 + 0x14) = 1

return *(eax + (arg2 << 2))
