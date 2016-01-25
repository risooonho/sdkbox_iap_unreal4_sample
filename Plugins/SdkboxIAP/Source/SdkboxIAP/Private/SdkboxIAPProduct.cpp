/****************************************************************************
 Copyright (c) 2015 SDKBOX Inc.
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "SdkboxIAPPrivatePCH.h"
#include "SdkboxIAPProduct.h"
#include "PluginIAP.h"

USdkboxIAPProduct::USdkboxIAPProduct(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

USdkboxIAPProduct::USdkboxIAPProduct(const sdkbox::Product& product)
    : Name(product.name.c_str())
    , Id(product.id.c_str())
    , Consumable(product.type == sdkbox::CONSUMABLE ? true : false)
    , Title(product.title.c_str())
    , Description(product.description.c_str())
    , PriceValue(product.priceValue)
    , Price(product.price.c_str())
    , CurrencyCode(product.currencyCode.c_str())
    , ReceiptCipheredPayload(product.receiptCipheredPayload.c_str())
    , Receipt(product.receipt.c_str())
{
}