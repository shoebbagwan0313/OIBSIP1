index.html


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tribute to Steve Jobs</title>
    <link rel="stylesheet" href="./style.css">
</head>
<body>
    <div class="container">
        <header>
            <h1>Tribute to Steve Jobs</h1>
        </header>
        <main>
            <section class="intro">
                <img src="./steve_jobs.jpg" alt="John Doe">
                <div class="info">
                    <h2>Steve Jobs</h2>
                    <p>
                        Steven Paul Jobs (February 24, 1955 – October 5, 2011) was an American business magnate, inventor, and investor. He was the co-founder, chairman, and CEO of Apple; the chairman and majority shareholder of Pixar; a member of The Walt Disney Company's board of directors following its acquisition of Pixar; and the founder, chairman, and CEO of NeXT. He was a pioneer of the personal computer revolution of the 1970s and 1980s, along with his early business partner and fellow Apple co-founder Steve Wozniak.
                    </p>
                    <p>
                        Jobs was born in San Francisco to a Syrian father and German-American mother. He was adopted shortly after his birth. Jobs attended Reed College in 1972 before withdrawing that same year.
                    </p>
                    <p>
                        In 1997, Jobs returned to Apple as CEO after the company's acquisition of NeXT. He was largely responsible for reviving Apple, which was on the verge of bankruptcy. He worked closely with British designer Jony Ive to develop a line of products that had larger cultural ramifications, beginning with the "Think different" advertising campaign and leading to the Apple Store, App Store (iOS), iMac, iPad, iPod, iPhone, iTunes, and iTunes Store. 
                    </p>
                    <p>
                        Sadly, He passed away on 5 October 2011, Palo Alto, California, United States
                    </p>
                </div>
            </section>

            <section class="timeline">
                <h2>Timeline of Life and Achievements</h2>
                <ul>
                    <li>
                        <span class="date">1976:</span>
                        Co-founded Apple Computer, Inc. (later renamed Apple Inc.) with Steve Wozniak and Ronald Wayne in his parents' garage.
                    </li>
                    <li>
                        <span class="date">1980:</span>
                        Apple goes public, making Steve Jobs a millionaire at the age of 25.
                    </li>
                    <li>
                        <span class="date">1983:</span>
                        Launched the Apple Lisa, one of the first commercial personal computers featuring a graphical user interface.                    </li>
                    <li>
                        <span class="date">1984:</span>
                        Introduced the Macintosh, a revolutionary personal computer with a graphical user interface and mouse, during a famous Super Bowl commercial.                    </li>
                    <li>
                        <span class="date">1985:</span>
                        Forced out of Apple following a power struggle with the company's board of directors.
                    </li>
                    <li>
                        <span class="date">1986:</span>
                        Founded NeXT Inc., a computer company focused on high-end workstations.
                    </li>
                    <li>
                        <span class="date">1989:</span>
                        Released the NeXT Computer, a technologically advanced workstation with an innovative object-oriented operating system.
                    </li>
                    <li>
                        <span class="date">2003:</span>
                        Launched the iTunes Store, allowing users to legally purchase and download music online.
                    </li>
                    <li>
                        <span class="date">2007:</span>
                        Introduced the iPhone, a groundbreaking smartphone that combined a phone, iPod, and internet communicator in one device.
                    </li>
                    <li>
                        <span class="date">2010:</span>
                        Unveiled the iPad, a tablet computer that defined the modern tablet market.
                    </li>
                    <li>
                        <span class="date">2011:</span>
                        Resigned as CEO of Apple Inc. due to health issues, but remained chairman of the company's board.                    </li>

                </ul>
            </section>

            <section class="achievements">
                <h2>Notable Achievements</h2>
                <ul>
                    <li>
                        <span class="year">1976:</span>
                        Co-Founded Apple Inc.
                    </li>
                    <li>
                        <span class="year">1986:</span>
                        Pixar Animation Studios   
                    </li>
                    <li>
                        <span class="year">2001:</span>
                        iPod and iTunes
                    </li>
                    <li>
                        <span class="year">2022:</span>
                    Presidential Medal of Freedom (posthumous, 2022)
                    </li>
                </ul>
            </section>
        </main>
        <footer>
            <p>Created by Sakshi &copy; 2023</p>
        </footer>
    </div>
</body>
</html>






style.css



body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    line-height: 1.6;
}

.container {
    max-width: 800px;
    margin: 0 auto;
    padding: 20px;
}

header {
    text-align: center;
    margin-bottom: 20px;
}

main {
    margin-bottom: 20px;
}

.intro {
    display: flex;
    align-items: center;
    flex-wrap: wrap;
}

img {
    width: 300px;
    height: 300px;
    border-radius: 50%;
    margin-right: 20px;
}

.info {
    flex: 1;
}

h1, h2 {
    text-align: center;
}

.timeline, .achievements {
    margin-bottom: 30px;
}

.timeline h2, .achievements h2 {
    border-bottom: 2px solid #333;
    padding-bottom: 5px;
}

ul {
    list-style: none;
    padding: 0;
}

li {
    margin-bottom: 10px;
}

.date, .year {
    font-weight: bold;
    margin-right: 10px;
}

footer {
    text-align: center;
    margin-top: 20px;
}

