head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta name="X-Csrf-Token" content="7fdba2872aa5464c39697ef75bd72406"/>
    <meta id="viewport" name="viewport" content="width=device-width, initial-scale=0.01"/>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery-1.8.3.js"></script>
    <script type="application/javascript">
        function adjustViewport() {
            var screenWidthPx = Math.min($(window).width(), window.screen.width);
            var siteWidthPx = 1100; // min width of site
            var ratio = Math.min(screenWidthPx / siteWidthPx, 1.0);
            var viewport = "width=device-width, initial-scale=" + ratio;
            $('#viewport').attr('content', viewport);
            var style = $('<style>html * { max-height: 1000000px; }</style>');
            $('html > head').append(style);
        }

        if ( /Android|webOS|iPhone|iPad|iPod|BlackBerry/i.test(navigator.userAgent) ) {
            adjustViewport();
        }
    </script>
    <meta http-equiv="pragma" content="no-cache">
    <meta http-equiv="expires" content="-1">
    <meta http-equiv="profileName" content="c3">
    <meta name="google-site-verification" content="OTd2dN5x4nS4OPknPI9JFg36fKxjqY0i1PSfFPv_J90"/>
    <meta property="fb:admins" content="100001352546622" />
    <meta property="og:image" content="http://st.codeforces.com/s/37239/images/codeforces-telegram-square.png" />
    <link rel="image_src" href="http://st.codeforces.com/s/37239/images/codeforces-telegram-square.png" />
    <meta property="og:title" content="Submission #18009139 - Codeforces"/>
    <meta property="og:description" content=""/>
    
    <meta property="og:site_name" content="Codeforces"/>
    
    
    <meta name="cc" content="b0ef12d873b9bcf605d0c5edc32f05673171a5c1"/>
    
    
    <meta name="utc_offset" content="+03:00"/>
    <meta name="verify-reformal" content="f56f99fd7e087fb6ccb48ef2" />
    <title>Submission #18009139 - Codeforces</title>
        <meta name="description" content="Codeforces. Programming competitions and contests, programming community" />
        <meta name="keywords" content="programming algorithm contest competition informatics olympiads c++ java graphs vkcup" />
    <meta name="robots" content="index, follow" />

    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/font-awesome.min.css" type="text/css" charset="utf-8" />

        <link href='//fonts.googleapis.com/css?family=PT+Sans+Narrow:400,700&subset=latin,cyrillic' rel='stylesheet' type='text/css'>
        <link href='//fonts.googleapis.com/css?family=Cuprum&subset=latin,cyrillic' rel='stylesheet' type='text/css'>


    <link rel="shortcut icon" type="image/png" href="http://st.codeforces.com/s/37239/favicon.png">

    <!--CombineResourcesFilter-->
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/prettify.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/clear.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/ttypography.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/problem-statement.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/second-level-menu.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/roundbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/datatable.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/table-form.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/topic.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/jquery.jgrowl.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/facebox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/jquery.wysiwyg.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/jquery.autocomplete.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/codeforces.datepick.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/colorbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/jquery.drafts.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/status.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="http://st.codeforces.com/s/37239/css/community.css" type="text/css" charset="utf-8" />

    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/prettify/prettify.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/moment.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/pushstream.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.easing.min.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.lavalamp.min.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.jgrowl.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.swipe.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/facebox.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.wysiwyg.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/controls/wysiwyg.colorpicker.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/controls/wysiwyg.table.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/controls/wysiwyg.image.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/controls/wysiwyg.link.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.autocomplete.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.datepick.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.ie6blocker.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.colorbox-min.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.ba-bbq.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/jquery.drafts.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/sjcl.js"></script>
    <script type="text/javascript" src="/scripts/e03eaf1e692867a456769c00e73e9c21/en/codeforces-options.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/js/codeforces.js?v=20160131"></script>
    <!--/CombineResourcesFilter-->

    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/markitup/skins/markitup/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/37239/markitup/sets/markdown/style.css" type="text/css" charset="utf-8" />

    <script type="text/javascript" src="//yandex.st/share/share.js" charset="utf-8"></script>

    <script type="text/javascript" src="http://st.codeforces.com/s/37239/markitup/jquery.markitup.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/37239/markitup/sets/markdown/set.js"></script>

    <!--[if IE]>
    <style>
        #sidebar {
            padding-left: 1em;
            margin: 1em 1em 1em 0;
        }
    </style>
    <![endif]-->


</head>
<body><span style='display:none;' class='csrf-token' data-csrf='7fdba2872aa5464c39697ef75bd72406'>&nbsp;</span>


<div class="side-bell" style="visibility: hidden; display: none; opacity: 0.7; width: 40px; position: fixed; right: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 1.5rem;">
    <span class="icon-stack" style="width: 100%;">
        <i class="icon-circle icon-stack-base"></i>
        <i class="icon-bell-alt icon-light"></i>
    </span>
    <br/>
    <span class="side-bell__count" style="position: relative; top: -10px;"></span>
</div>


<div class="button-up" style="display: none; opacity: 0.7; width: 50px; height:100%; position: fixed; left: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 3.0rem;"><i class="icon-circle-arrow-up"></i></div>

<!-- Codeforces JavaScripts. -->
<script type="text/javascript">
    var queryMobile = Codeforces.queryString.mobile;
    if (queryMobile === "true" || queryMobile === "false") {
        Codeforces.putToStorage("useMobile", queryMobile == "true");
    } else {
        var useMobile = Codeforces.getFromStorage("useMobile");
        if (useMobile === true || useMobile === false) {
            if (useMobile != false) {
                Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", useMobile));
            }
        }
    }
</script>
<script type="text/javascript">
    if (window.parent.frames.length > 0) {
        window.stop();
    }
</script>

    <script type="text/javascript">
        $(document).ready(function () {
    (function () {
        jQuery.expr[':'].containsCI = function(elem, index, match) {
            return !match || !match.length || match.length < 4 || !match[3] || (
                    elem.textContent || elem.innerText || jQuery(elem).text() || ''
            ).toLowerCase().indexOf(match[3].toLowerCase()) >= 0;
        }
    }(jQuery));

    $.ajaxPrefilter(function(options, originalOptions, xhr) {
        var csrf = Codeforces.getCsrfToken();

        if (csrf) {
            var data = originalOptions.data;
            if (originalOptions.data !== undefined) {
                if (Object.prototype.toString.call(originalOptions.data) === '[object String]') {
                    data = $.deparam(originalOptions.data);
                }
            } else {
                data = {};
            }
            options.data = $.param($.extend(data, { csrf_token: csrf }));
        }
    });

    window.getCodeforcesServerTime = function(callback) {
        $.post("/data/time", {}, callback, "json");
    }

    window.updateTypography = function () {
        $("div.ttypography code").addClass("tt");
        $("div.ttypography pre>code").addClass("prettyprint").removeClass("tt");
        $("div.ttypography table").addClass("bordertable");
        prettyPrint();
    }

    $.ajaxSetup({ scriptCharset: "utf-8" ,contentType: "application/x-www-form-urlencoded; charset=UTF-8", headers: {
        'X-Csrf-Token': Codeforces.getCsrfToken()
    }});

    window.updateTypography();

    Codeforces.signForms();

    setTimeout(function() {
        $(".second-level-menu-list").lavaLamp({
            fx: "backout",
            speed: 1000
        });
    }, 0);


    Codeforces.countdown();
    $("a[rel='photobox']").colorbox();


    function showAnnouncements(json) {
        //info("j=" + JSON.stringify(json));

        if (json.t != "a") {
            return;
        }
        // console.log("Got announcement from channel");
        setTimeout(function() {
            Codeforces.showAnnouncements(json.d, "en");
        }, Math.random() * 500);
    }
    if (Codeforces.getParticipantChannel()) {
        Codeforces.subscribe(Codeforces.getParticipantChannel(), function(json) {
            showAnnouncements(json);
        });
    }

    if (Codeforces.getContestChannel()) {
        Codeforces.subscribe(Codeforces.getContestChannel(), function(json) {
            showAnnouncements(json);
        });
    }

    if (Codeforces.getGlobalChannel()) {
        Codeforces.subscribe(Codeforces.getGlobalChannel(), function(json) {
            showAnnouncements(json);
        });
    }

    if (Codeforces.getUserChannel()) {
        Codeforces.subscribe(Codeforces.getUserChannel(), function(json) {
            showAnnouncements(json);
        });
    }

    $(".clickable-title").click(function() {
        Codeforces.alert($(this).attr("title"));
    }).css("position", "relative").css("bottom", "3px");


    Codeforces.reformatTimes();
    Codeforces.initializePubSub();

    Codeforces.setupSpoilers();
    Codeforces.setupTutorials("/data/problemTutorial");
        });
    </script>

<script type="text/javascript">
  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-743380-5']);
  _gaq.push(['_trackPageview']);

  (function () {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = (document.location.protocol == 'https:' ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
</script>


<div id="body">
        
<div id="header" style="position: relative;">
    <div style="float:left;">
            
            <a href="/"><img src="http://st.codeforces.com/s/37239/images/codeforces-logo-with-telegram.png"/></a>
    </div>
    <div class="lang-chooser">
        <div style="text-align: right;">
            <a href="?locale=en"><img src="http://st.codeforces.com/s/37239/images/flags/24/gb.png" title="In English" alt="In English"/></a>
            <a href="?locale=ru"><img src="http://st.codeforces.com/s/37239/images/flags/24/ru.png" title="По-русски" alt="По-русски"/></a>
        </div>

        <div>
                    <a href="/enter?back=%2Fcontest%2F355%2Fsubmission%2F18009139">Enter</a>
                     | 
                    <a href="/register">Register</a>
                    
        </div>



    </div>
    <br style="clear: both;"/>
</div>
        

    <div class="roundbox menu-box" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
            <div class="roundbox-lb">&nbsp;</div>
            <div class="roundbox-rb">&nbsp;</div>
    <div class="menu-list-container">
    <ul class="menu-list main-menu-list">
                <li class=""><a href="/">Home</a></li>
                <li class="current"><a href="/contests">Contests</a></li>
                <li class=""><a href="/gyms">Gym</a></li>
                <li class=""><a href="/problemset">Problemset</a></li>
                <li class=""><a href="/groups">Groups</a></li>
                <li class=""><a href="/ratings">Rating</a></li>
                <li class=""><a href="/api/help">API</a></li>
                <li class=""><a href="/8vc">8VC VentureCup <img class="icon" src="http://st.codeforces.com/images/icons/cup.png"/></a></li>
                <li class=""><a href="/sections">Sections</a></li>
    </ul>
        <form method="post" action="/search"><input type='hidden' name='csrf_token' value='7fdba2872aa5464c39697ef75bd72406'/>
            <input class="search" name="query" data-isPlaceholder="true" value=""/>
        </form>
    <br style="clear: both;"/>
</div>

    </div>

    <script type="text/javascript">
        $(document).ready(function () {
            $("input.search").focus(function () {
                if ($(this).attr("data-isPlaceholder") === "true") {
                    $(this).val("");
                    $(this).removeAttr("data-isPlaceholder");
                }
            });
        });
    </script>
            <br style="height: 3em; clear: both;"/>

        <div style="position: relative;">
                <div id="pageContent">
                    <div class="second-level-menu">
<ul class="second-level-menu-list">
        <li><a
                                        href="/contest/355">Problems</a></li>
        <li><a
                                        href="/contest/355/submit">Submit Code</a></li>
        <li><a
                                        href="/contest/355/my">My Submissions</a></li>
        <li class="current selectedLava"><a
                                        href="/contest/355/status">Status</a></li>
        <li><a
                                        href="/contest/355/hacks">Hacks</a></li>
        <li><a
                                        href="/contest/355/room/1">Room</a></li>
        <li><a
                                        href="/contest/355/standings">Standings</a></li>
        <li><a
                                        href="/contest/355/customtest">Custom Invocation</a></li>
</ul>
</div>


<div class="datatable"
     
     style="background-color: #E1E1E1; padding-bottom: 3px;">
            <div class="lt">&nbsp;</div>
            <div class="rt">&nbsp;</div>
            <div class="lb">&nbsp;</div>
            <div class="rb">&nbsp;</div>

            <div style="padding: 4px 0 0 6px;font-size:1.4rem;position:relative;">
                General

                <div style="position:absolute;right:0.25em;top:0.35em;">
                    <span style="padding:0;position:relative;bottom:2px;" class="rowCount"></span>

                    <img class="closed" src="http://st.codeforces.com/s/37239/images/icons/control.png"/>

                    <span class="filter" style="display:none;">
                        <img class="opened" src="http://st.codeforces.com/s/37239/images/icons/control-270.png"/>
                        <input style="padding:0;position:relative;bottom:2px;border:1px solid #aaa;height:17px;font-size:1.3rem;"/>
                    </span>
                </div>
            </div>
            <div style="background-color: white;margin:0.3em 3px 0 3px;position:relative;">
            <div class="ilt">&nbsp;</div>
            <div class="irt">&nbsp;</div>
            <table class="">
<tr>
    <th style="width:2em;">#</th>
    <th style="width:12em;">Author</th>
    <th style="width:2em;">Problem</th>
    <th style="width:2em;">Lang</th>
    <th style="width:8em;">Verdict</th>
    <th style="width:2em;">Time</th>
    <th style="width:2em;">Memory</th>
    <th style="width:4em;">Sent</th>
    <th style="width:4em;">Judged</th>
    <th style="width:4em;">&nbsp;</th>
</tr>
<tr>
    <td>18009139</td>
    <td>
            Practice:<br/>
<a href="/profile/newts" title="Specialist newts" class="rated-user user-cyan">newts</a>    </td>
    <td>
        <a title="B - Vasya and Public Transport" href="/contest/355/problem/B">355B</a>
         - <span title="problem revision">12</span>
    </td>
    <td>
    GNU C++11
    </td>
    <td>
    <span class='verdict-accepted'>Accepted</span>
    </td>
    <td>
        15 ms
    </td>
    <td>
        2188 KB
    </td>
    <td>2016-05-20 20:59:57</td>
    <td>2016-05-20 20:59:57</td>
    <td>
        <button style="padding: 0.05em; width: 80px;" class="showDiff" title="Compare">Compare</button>
    </td>
</tr>
            </table>
            </div>
        </div>
    <script type="text/javascript">
        $(document).ready(function () {
                // Create new ':containsIgnoreCase' selector for search
                jQuery.expr[':'].containsIgnoreCase = function(a, i, m) {
                    return jQuery(a).text().toUpperCase()
                            .indexOf(m[3].toUpperCase()) >= 0;
                };

                if (window.updateDatatableFilter == undefined) {
                    window.updateDatatableFilter = function(i) {
                        var parent = $(i).parent().parent().parent().parent();
                        $("tr.no-items", parent).remove();
                        $("tr", parent).hide().removeClass('visible');
                        var text = $(i).val();
                        if (text) {
                            $("tr" + ":containsIgnoreCase('" + text + "')", parent).show().addClass('visible');
                        } else {
                            parent.find(".rowCount").text("");
                            $("tr", parent).show().addClass('visible');
                        }

                        var found = false;
                        var visibleRowCount = 0;
                        $("tr", parent).each(function () {
                            if (!found) {
                                if ($(this).find("th").size() > 0) {
                                    $(this).show().addClass('visible');
                                    found = true;
                                }
                            }
                            if ($(this).hasClass('visible')) {
                                visibleRowCount++;
                            }
                        });
                        if (text) {
                            parent.find(".rowCount").text("Matches: " + (visibleRowCount - (found ? 1 : 0)));
                        }
                        if (visibleRowCount == (found ? 1 : 0)) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo($(parent).find('table'));
                        }
                        $(parent).find("tr td").removeClass("dark");
                        $(parent).find("tr.visible:odd td").addClass("dark");
                    }

                    $(".datatable .closed").click(function () {
                        var parent = $(this).parent();
                        $(this).hide();
                        $(".filter", parent).fadeIn(function () {
                            $("input", parent).val("").focus().css("border", "1px solid #aaa");
                        });
                    });

                    $(".datatable .opened").click(function () {
                        var parent = $(this).parent().parent();
                        $(".filter", parent).fadeOut(function () {
                            $(".closed", parent).show();
                            $("input", parent).val("").each(function () {
                                window.updateDatatableFilter(this);
                            });
                        });
                    });

                    $(".datatable .filter input").keyup(function(e) {
                        window.updateDatatableFilter(this);
                        e.preventDefault();
                        e.stopPropagation();
                    });

                    $(".datatable table").each(function () {
                        var found = false;
                        $("tr", this).each(function () {
                            if (!found && $(this).find("th").size() == 0) {
                                found = true;
                            }
                        });
                        if (!found) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo(this);
                        }
                    });

                    // Applies styles to datatables.
                    $(".datatable").each(function () {
                        $(this).find("tr:first th").addClass("top");
                        $(this).find("tr:last td").addClass("bottom");
                        $(this).find("tr:odd td").addClass("dark");
                        $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                        $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                    });

                    $(".datatable table.tablesorter").each(function () {
                        $(this).bind("sortEnd", function () {
                            $(".datatable").each(function () {
                                $(this).find("th, td")
                                    .removeClass("top").removeClass("bottom")
                                    .removeClass("left").removeClass("right")
                                    .removeClass("dark");
                                $(this).find("tr:first th").addClass("top");
                                $(this).find("tr:last td").addClass("bottom");
                                $(this).find("tr:odd td").addClass("dark");
                                $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                                $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                            });
                        });
                    });
                }
        });
    </script>

    <div class="roundbox " style="margin-top:2em;font-size:1.1rem;">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <div class="caption titled">&rarr; Source
            <div class="top-links">
            </div>
        </div>
    <pre class="prettyprint lang-cpp program-source" style="padding: 0.5em;">#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 10000000000
#define tr(v,it) for(typeof(v.begin());it!=v.end();it++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(v,i,n) for(i,0,n){cout<<v[i]<<" ";}
#define all(v) (v.begin(),v.end())

using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);

long long c1,c2,c3,c4,n,m;
cin>>c1>>c2>>c3>>c4;
cin>>n>>m;
vector<long long>b(n),t(m);
for(int i=0;i<n;i++)
cin>>b[i];
for(int i=0;i<m;i++)
cin>>t[i];
long long bsum=0,tsum=0;
for(long long i=0;i<n;i++)
{
  if(b[i]*c1<=c2)
  bsum+=b[i]*c1;
  else
  bsum+=c2;
}
bsum=min(c3,bsum);

for(long long i=0;i<m;i++)
{
  if(t[i]*c1<=c2)
  tsum+=t[i]*c1;
  else
  tsum+=c2;
}
tsum=min(c3,tsum);
cout<<min(c4,bsum+tsum);
return 0;}
