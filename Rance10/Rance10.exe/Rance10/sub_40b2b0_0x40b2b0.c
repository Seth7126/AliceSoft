// 函数: sub_40b2b0
// 地址: 0x40b2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 8) == 0)
    return 

switch (arg2)
    case 0
        int32_t* ecx = *(*(arg1 + 0x10) + 8)
        char eax_5
        
        if (ecx != 0)
            eax_5 = (*(*ecx + 0x10))()
        
        if (ecx == 0 || eax_5 != 0)
            int32_t* ecx_1 = *(*(arg1 + 0x10) + 8)
            
            if (ecx_1 != 0)
                (*(*ecx_1 + 4))()
    case 1
        int32_t* ecx_2 = *(*(arg1 + 0x10) + 8)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x10))() == 0)
            int32_t* ecx_3 = *(*(arg1 + 0x10) + 8)
            
            if (ecx_3 != 0)
                (*(*ecx_3 + 8))()
    case 2
        void* edi_1 = *(arg1 + 0xc)
        
        if (*(edi_1 + 0x38) != 0)
            (*(**(edi_1 + 0x28) + 0xc))()
        
        sub_4188f0(edi_1)
    case 3
        sub_418510(*(arg1 + 0xc))
    case 4
        sub_418560(*(arg1 + 0xc))
    case 5
        sub_4185b0(*(arg1 + 0xc))
    case 6
        sub_4185f0(*(arg1 + 0xc))

sub_40aa40(arg1)
int32_t* ecx_11 = *(*(arg1 + 0x10) + 8)
void* eax_15

if (ecx_11 != 0)
    eax_15 = (*(*ecx_11 + 0x10))()
else
    eax_15.b = 1

WPARAM wParam
wParam.b = eax_15.b != 0
SendMessageA(*(arg1 + 8), 0x904, wParam, 0)
