//
//  WordPressComRestApi+Defaults.swift
//  WordPress
//
//  Created by James Treanor on 03/04/2019.
//  Copyright © 2019 WordPress. All rights reserved.
//

import Foundation
import WordPressKit

extension WordPressComRestApi {
    @objc public static func defaultApi(oAuthToken: String? = nil,
                                        userAgent: String? = nil,
                                        localeKey: String = WordPressComRestApi.LocaleKeyDefault) -> WordPressComRestApi {
        return WordPressComRestApi(oAuthToken: oAuthToken,
                                   userAgent: userAgent,
                                   localeKey: localeKey,
                                   baseUrlString: Environment.current.wordPressComApiBase)
    }
}
