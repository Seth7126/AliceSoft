// 函数: sub_5205d0
// 地址: 0x5205d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct partsengine::IEventArgs::partsengine::SFixedEventArgs::VTable* const var_4 = arg1
var_4 = &partsengine::SFixedEventArgs::`vftable'{for `partsengine::IEventArgs'}
void* result = sub_4cbd50(arg1 + 0xc, &var_4, 0)
void* edi = data_7fcb68

if (*(edi + 4) != 0)
    result = (*(**(edi + 4) + 0x1c))()
else
    int32_t* ecx_1 = data_7fcb88
    
    if (ecx_1 != 0)
        result = (**ecx_1)(0x75ff30)
        *(edi + 4) = result
        
        if (result != 0)
            result = (*(**(edi + 4) + 0x1c))()

void* edi_1 = data_7fcb68

if (*(edi_1 + 4) != 0)
    result = (*(**(edi_1 + 4) + 0x14))()
else
    int32_t* ecx_3 = data_7fcb88
    
    if (ecx_3 != 0)
        result = (**ecx_3)(0x75ff30)
        *(edi_1 + 4) = result
        
        if (result != 0)
            result = (*(**(edi_1 + 4) + 0x14))()

void* edi_2 = data_7fcb68

if (*(edi_2 + 4) != 0)
    result = (*(**(edi_2 + 4) + 0x28))()
else
    int32_t* ecx_5 = data_7fcb88
    
    if (ecx_5 != 0)
        result = (**ecx_5)(0x75ff30)
        *(edi_2 + 4) = result
        
        if (result != 0)
            result = (*(**(edi_2 + 4) + 0x28))()

arg1->__offset(0xb0).d = 0xffffffff
arg1->__offset(0xb4).d = 0xffffffff
arg1->__offset(0xac).w = 0
return result
